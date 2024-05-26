#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the n:";
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
        cout<<factorial<<endl;
         sum=sum+factorial;
    }
    cout<<sum;
    return 0;
}