// Написать функцию, которая удаляет из строки
// символ с заданным номером

#include <iostream>

char DelSymbol(char str[], int symbol)
{
    for (int i = 1; i < strlen(str); i++)
    {
        if (i == symbol)
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

    std::cout << "Укажите символ который требуется удалить: "; 
    int number;
    std::cin >> number;

    DelSymbol(string, number);

    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }  
}
