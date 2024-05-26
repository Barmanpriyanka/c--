#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the num";
    cin>>num;

    if(num%3==0||num%5==0)
    {
        cout<<num;


    }
    else {
        return -1;
    }
    return 0;
}