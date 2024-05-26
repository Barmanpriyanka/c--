#include<iostream>
using namespace std;
int main()
{
    
    int index,element;
    cout<<"enter the index:";
    cin>>index;
    cout<<"enter the element :";
    cin>>element;
    int arr[]={1,2,3,4,5};
   

    for(int i=4;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    size+=1;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }

    return 0;
}