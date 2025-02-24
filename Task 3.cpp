// �������� �������, ������� ��������� � ������ 
// � ��������� ������� �������� ������

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
    std::cout << "����� ���������� � ���������!" << std::endl; 
    std::cout << "��������� ��������� ��������� � ������ � ��������� ������� �������� ������!" << std::endl;
    char string[] = "Hello world!";
    
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }

    std::cout << "������� ������ ������� ��������� ��������: ";
    char symbol;
    std::cin >> symbol;

    std::cout << "������� ����� ������� � ������ ���� ��������� �������� ������: ";
    int number;
    std::cin >> number;

    InsertSymbol(string, symbol, number);

    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << "\n[" << i << "] \t" << string[i] << std::endl;
    }
    return 0;
}
