#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the row:";
    cin>>n;
    cout<<"enter the columns:";
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    int x;
    cout<<"enter the x";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==x)
            {
               cout<<i<<" "<<j;
               flag=true;
            }
        }
    }
if(flag)
{
    cout<<"element is found";
}
else{
    cout<<"element is not found ";
}
return 0;

}