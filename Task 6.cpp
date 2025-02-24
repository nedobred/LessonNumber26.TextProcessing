// ������������ ������ ������. ����������
// ���������� ����, ��������� ������� ���� � ����������
// ��������� ��������, �������������� � ������.

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
    std::cout << "����� ���������� � ��������� �������� ��� (���������), ���� � ��������� ��������!" << std::endl;
    std::cout << "������� ������ �� ����� 20 ��������: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin); // ��������� ������ � ������ string

    std::cout << "\n�� ����� ��������� ������" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    int countLetter { 0 }; // ������� ����
    int countNumber { 0 };  // ������� ����
    int countOther { 0 };   // ������� ��������� ��������

    QuantitySymbol(string, countLetter, countNumber, countOther);

    std::cout << "\n���� ������� �������� ����: " << countLetter << std::endl;
    std::cout << "\n���� ������� �������� ����: " << countNumber << std::endl;
    std::cout << "\n���� ������� �������� ��������� ��������: " << countOther << std::endl;

    return 0;
}