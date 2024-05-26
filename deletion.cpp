#include<iostream>
using namespace std;
int deletion(int arr[],int n,int index)
{ for(int i=index;i<n;i++)
   {

   arr[i]=arr[i+1];
   }
   
}
int main(){
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
    cout<<arr[i];

}
int index,element;

cout<<"enter the index from where u need to remove the element:";
cin>>index;

 deletion(arr,n,index);
 n-=1;
 for(int i=0;i<n;i++)
{
    cout<<arr[i];

}
    return 0;
}