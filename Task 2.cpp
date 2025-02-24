// Написать функцию, которая удаляет из строки
// все вхождения в нее заданного символа.

#include <iostream>


void DelSymbol(char *str, char symbol)
{
    int j = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != symbol)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
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
    char str;
    std::cin >> str;

    DelSymbol(string, str);

    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }
    return 0;
}