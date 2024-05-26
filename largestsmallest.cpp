#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    int max= arr[0];
    int min=arr[0];

    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }


    
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];

       }
       if(arr[i]<min)
       {
        min=arr[i];
       }
    }
    cout<<"max is "<<max;
    cout<<"min is"<<min;

return 0;
}