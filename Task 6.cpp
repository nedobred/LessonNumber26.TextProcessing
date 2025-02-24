// Пользователь вводит строку. Определить
// количество букв, посчитать сколько цифр и количество
// остальных символов, присутствующих в строке.

#include <iostream>

void QuantitySymbol(char str[], int &_countLetter, int &_countNumber, int &_countOther)
{
    for (int i = 0; i < strlen(str)-1; i++) 
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            _countLetter++; 
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            _countNumber++;   
        }
        else 
            _countOther++;
    }
}

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Добро пожаловать в программу подсчета бук (латинских), цифр и остальных символов!" << std::endl;
    std::cout << "Введите строку не более 20 символов: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin); // считываем строку в массив string

    std::cout << "\nВы ввели следующую строку" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    int countLetter { 0 }; // счетчик букв
    int countNumber { 0 };  // счетчик цифр
    int countOther { 0 };   // счетчик остальных символов

    QuantitySymbol(string, countLetter, countNumber, countOther);

    std::cout << "\nВаша строчка содержит букв: " << countLetter << std::endl;
    std::cout << "\nВаша строчка содержит цифр: " << countNumber << std::endl;
    std::cout << "\nВаша строчка содержит остальных символов: " << countOther << std::endl;

    return 0;
}