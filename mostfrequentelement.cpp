#include<iostream>
using namespace std;
int main()
{    int maxcount=0;
int mostfrequentelement;
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
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxcount)
        {
            maxcount=count;
            mostfrequentelement=arr[i];
        }
    }
    cout<<"the most frequent element in an array is :"<<mostfrequentelement;
    return 0;
}