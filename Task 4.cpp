// �������� ���������, ������� �������� ��� �������
// ����� "." � ������, ��������� �������������, 
// �� ������� ���������������� ����� "!".

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
    std::cout << "����� ���������� � ��������� ���� ������ ������� \".\" �� ������ \"!\" " << std::endl;
    std::cout << "������� ������ �� ����� 20 ��������: " << std::endl;
    char string[21];
    fgets(string, sizeof(string), stdin);
    
    std::cout << "\n�� ����� ��������� ������" << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }

    ReplaceSymbol(string);

    std::cout << "\n���� ������� ����� ��������������: " << std::endl;
    for (int i = 0; i < strlen(string); i++)
    {
        std::cout << string[i];
    }
}