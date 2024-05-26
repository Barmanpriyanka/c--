#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the n:";
    cin>>n;
     int result=0;
    for(i=1;i<n;i++)
    {
          if(i%2==0)
          {
            result=result-i;
          }
          else
          {
            result=result+i;
          }
    }
    cout<<result;
}