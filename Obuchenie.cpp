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
    cout<<"Ќачалната цена на обучението е 10 000 долара за тази година. ÷ената са увеличава с 6% на година."<<"—ледователно, след 10 години началната цена за образованието ви ще е "<<cena<<"."<<"» образованието ви там за 4 години ще струва "<<obshto<<".";
    return 0;
}
