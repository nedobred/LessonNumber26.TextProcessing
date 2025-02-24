// Написать функцию, которая вставляет в строку 
// в указанную позицию заданный символ

#include <iostream>


void InsertSymbol(char str[], char ch, int index)
{
    for (int i = 0; i < strlen(str)-1; i++)
    {
        str[i + 1] = str[i];
    }
    str[index] = ch;
}

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Добро пожаловать в программу!" << std::endl; 
    std::cout << "Программа позволяет вставлять в строку в указанную позицию заданный символ!" << std::endl;
    char string[] = "Hello world!";
    
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }

    std::cout << "Укажите символ который требуется вставить: ";
    char symbol;
    std::cin >> symbol;

    std::cout << "Укажите номер позиции в строке куда требуется вставить символ: ";
    int number;
    std::cin >> number;

    InsertSymbol(string, symbol, number);

    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }
    return 0;
}
