#include<iostream>
using namespace std;
int main()
{
    cout<<"Type a number between 5 and 15:";
    int num, p;
    cin>>num;
    if (num<5 or num>15){
        cout<<"Your number is outside the bounds.";
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

