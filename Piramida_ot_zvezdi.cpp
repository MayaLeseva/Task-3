#include<iostream>
#include<locale>
using namespace std;
int main()
{
    setlocale (LC_ALL, "bulgarian");
    cout<<"Въведете брой на линиите, който да е между 5 и 15:";
    int num, p;
    cin>>num;
    if (num<5 or num>15){
        cout<<"Числото ви не отговаря на зададените граници.";
    }
    else{for (int i=num; i>=1;i--){
            p=num;
            while(p-i!=0){
                cout<<" ";
                p=p-1;
            }
        for (int h=1; h<=i; h++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
    return 0;
}

