#include<iostream>
using namespace std;
void insertionshort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];

    }

}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    insertionshort(arr,n);
    return 0;

}