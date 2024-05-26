#include<iostream>
using namespace std ;
int fuction(int arr[],int n,int k)
{

    int s=0;
    int e=8;
    while(s<=e)
    {

        int mid=(s+e)/2;

        if(k==arr[mid])
        {
            return mid;
        }
       if(k>arr[mid])
    {
        s=mid+1;
    }
        if(k<arr[mid])
    {
        e=mid+1;
    }
     
    }
    return -1;
    
}
int main()
{
    int n=8;
    int arr[8]={1,2,3,4,5,6,7,8};
    int k=7;
    cout<<"k is found at:"<<fuction(arr,8,7);

    
    
    return 0;

}