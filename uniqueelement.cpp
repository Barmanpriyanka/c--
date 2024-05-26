#include<iostream>
using namespace std;
void unique(int  arr[],int size)
{
int p=0;
    for(int i=0;i<size;i++)
    {
         p=p^arr[i];
        
    }
    cout<<p;
}
    

    
    
int main()
{

    int arr[]={1,1,2,2,5};
    unique(arr,5);
    return 0;

}
    
   
    