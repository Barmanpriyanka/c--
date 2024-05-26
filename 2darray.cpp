#include<iostream>
using namespace std;
int main()
{
    int arr[2][4],i,j;
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
        {
        cout<<"enter the elements:";
        cin>>arr[i][j];
        }
    
    for( i=0;i<2;i++)
    {
       for( j=0;j<4;j++)
    
        cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    
    return 0;
}