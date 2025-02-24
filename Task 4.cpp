// Написать программу, которая заменяет все символы
// точки "." в строке, введенной пользователем, 
// на символы восклицательного знака "!".

#include <iostream>

void ReplaceSymbol(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.')
        {
            str[i] = '!';
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Добро пожаловать в программу авто замены символа \".\" на символ \"!\" " << std::endl;
    std::cout << "Введите строку не более 20 символов: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin);
    
    std::cout << "\nВы ввели следующую строку" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    ReplaceSymbol(string);

    std::cout << "\nВаша строчка после преобразования: " << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }
}