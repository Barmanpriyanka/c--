#include<iostream>
using namespace std;
int main()
{    int n;
     cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
          largest=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>secondlargest  && arr[i]!=largest)
        {
          secondlargest=arr[i];
        }
    }
    cout<<"second largest element is:"<<secondlargest;
    return 0;

}