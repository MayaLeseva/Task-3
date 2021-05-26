#include<iostream>
using namespace std;
int main()
{
    cout<<"Type a number beteen 5 and 15:";
    int num;
    cin>>num;
    if (num<5 or num>15){
        cout<<"Your number is outside the bounds.";
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
