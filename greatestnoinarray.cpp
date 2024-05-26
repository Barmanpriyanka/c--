#include<iostream>
using namespace std;
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
    int maxno=arr[0];
    int minno=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxno)
        {
            maxno=arr[i];
        }
        if(arr[i]<minno)
        {
            minno=arr[i];
        }
    }
        cout<<"maximum no is:"<<maxno;
        cout<<"minimum no is :"<<minno;
        return 0;
    
}