// ������������ ������ ������ �������� � ������� ������, 
// ��������� ������� ��� �� ����������� � ������.

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
    std::cout << "����� ���������� � ��������� �������� �������� � ������" << std::endl;
    std::cout << "������� ������ �� ����� 20 ��������: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin);
    
    std::cout << "\n�� ����� ��������� ������" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    std::cout << "������� ������ ���������� �������� ��������� ������: " << std::endl;
    char str;
    std::cin >> str;

    int counter{0}; // ������� ���������� �������� �������

    std::cout << "���������� ���������� ������� " << str << " ����������: " << SumSymbol(string, str, counter) << std::endl;
}