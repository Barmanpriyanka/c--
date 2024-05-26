#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int key;
    cout<<"enter the key :";
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
     if(arr[i]==key)
     {
        cout<<"key found "<<i;
     }
    }
    

    return 0;
}