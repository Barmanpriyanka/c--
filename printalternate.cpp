#include <iostream>
using namespace std;
void swapalternate(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
       if(i+1<n)
       {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
           
       }
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main() {
    
    int arr[5]={3,6,7,8,9};
    
    swapalternate(arr,5);
    printArray(arr,5);
    
    return 0;
}