#include<iostream>
#include<locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "bulgarian");
    double cena=10000, cena1, obshto=0;
    for (int i=1;i<=10;i++)
    {
        cena=(cena/100)*106;
    }
    cena1=cena;
    for (int i=1;i<=4;i++)
    {
        obshto=obshto+cena1;
        cena1=(cena1/100)*106;
    }
    cout<<"��������� ���� �� ���������� � 10 000 ������ �� ���� ������. ������ �� ��������� � 6% �� ������."<<"������������, ���� 10 ������ ��������� ���� �� ������������� �� �� � "<<cena<<"."<<"� ������������� �� ��� �� 4 ������ �� ������ "<<obshto<<".";
    return 0;
}
