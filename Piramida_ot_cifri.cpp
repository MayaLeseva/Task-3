#include<iostream>
#include<locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "bulgarian");
    cout<<"�������� ���� �� �������, ����� �� � ����� 5 � 15:";
    int num;
    cin>>num;
    if (num<5 or num>15){
        cout<<"������� �� �� �������� �� ���������� �������.";
    }
    else{for (int i=num; i>=1;i--){
        for (int h=i; h>=1; h--){
            cout<<h<<" ";
        }
        for (int h=2; h<=i; h++){
            cout<<h<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}
