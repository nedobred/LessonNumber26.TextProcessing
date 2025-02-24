// Написать функцию, которая удаляет из строки
// символ с заданным номером

#include <iostream>

char DelSymbol(char str[], int index)
{
    for (int i = 1; i < strlen(str); i++)
    {
        if (i == index)
        {
            str[i] = str[i + 1];
        }
        else
            str[i] = str[i];
    }
    return *str;
}

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Добро пожаловать в программу удаления из строки символа с заданным номером!\n";
    char string[] = "Hello world!";
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }

    std::cout << "Укажите номер символа который требуется удалить: "; 
    int number;
    std::cin >> number;

    DelSymbol(string, number);

    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }  
    return 0;
}
