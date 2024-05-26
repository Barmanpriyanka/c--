#include<iostream>
using namespace std;
int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;
    char name='p';
    cout<<sizeof(name)<<endl;
    cout<<&a<<endl;
    bool flag;
    a==name?flag=true:flag=false;
    cout<<flag<<endl;
    int b=5;
    cout<<(b++)<<endl;//5
     int c=b+7;
    cout<<(c++)<<endl;//6
    cout<<(4+2+"pqr");
    cout<<("pqrt"+4+6);
    return 0;
}