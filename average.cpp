#include<iostream>
 using namespace std;
 int main()
 {
    int n,sum=0,average;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    average=sum/n;
    cout<<"average is :"<<average;
    cout<<"sum is:"<<sum;

    return 0;
 }