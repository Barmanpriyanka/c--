#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,4};
    int ans=0;
     for(int i=0;i<6;i++)
     {
        ans=ans^arr[i];
     }
     for(int i=0;i<6;i++)
     {
        ans=ans^i;
        
     }

    cout<<"duplicate element is "<<ans;
    return 0;
}