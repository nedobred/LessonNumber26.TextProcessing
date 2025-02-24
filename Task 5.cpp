// Пользователь вводит строку символов и искомый символ, 
// посчитать сколько раз он встречается в строке.

#include <iostream>

int SumSymbol(char str[], char ch, int _count)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ch) 
        {
            _count++;
        }
    }
    return _count;
}

int main()
{
    setlocale(LC_ALL, "");
    std::cout << "Добро пожаловать в программу подсчета символов в строке" << std::endl;
    std::cout << "Введите строку не более 20 символов: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin);
    
    std::cout << "\nВы ввели следующую строку" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    std::cout << "Укажите символ количество которого требуется узнать: " << std::endl;
    char str;
    std::cin >> str;

    int counter{0}; // счетчик количества повторов символа

    std::cout << "Количество повторений символа " << str << " составляет: " << SumSymbol(string, str, counter) << std::endl;
}