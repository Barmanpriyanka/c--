#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int k)
{

    int s=0;
    int e=8;
    while(s<=e){
    int mid=(e+s)/2;
    if(k==arr[mid])
    {
       
        return mid;
    }
    else if(k>arr[mid]){
        s=mid+1;

    }
    else if(k<arr[mid])
    {
        e=mid-1;
    }
    }
    cout<<"key not found";
    

}


int main()
{
    int n=8,k=7;
   
    int arr[]={1,2,3,4,5,6,7,8};
    
    cout<<"key found at index:"<<binarysearch(arr,n,k);
    return 0;
}