#include<iostream>
using namespace std;
int main()
{
    /*int a=7;
    cout<<a<<endl;
    cout<<&a<<endl;//address of a

    int *ptr=&a;
    cout<<*ptr<<endl;//value at address
    cout<<ptr<<endl;
    cout<<"size of integer is :"<<sizeof(a)<<endl;
     cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
     */
     int a=5;
     int *ptr=0;

     ptr=&a;
     cout<<ptr<<endl;
     cout<<*ptr<<endl;

    return 0;
}
