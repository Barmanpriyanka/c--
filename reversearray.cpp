#include<iostream>
using namespace std;
void printarray(int arr[],int n)
    {
        for(int i=0;i<n;i++){
        
      cout<<arr[i];    
    }
    }

    void reverse(int arr[],int n)
    {
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
    }

int main()
{
    
   int arr[5]={1,2,4,5,6};
     reverse(arr,5);
     printarray(arr,5);
    return  0;
}

