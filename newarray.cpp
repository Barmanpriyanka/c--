#include<iostream>
using namespace std;
int main()
{
     int count=1;
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int newarr[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            while(i!=j)
            {
                count=count*arr[j];
            }
        }
        newarr[i]=count;
    }

    for(int j=0;j<n;j++)
    {
        cout<<newarr[j];
    }
    return 0;
}