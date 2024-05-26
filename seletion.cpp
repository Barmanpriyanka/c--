#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=0;
        for(j=i+1;i<n;i++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }

        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    return 0;
}