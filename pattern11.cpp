#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
  
    while(i<=n)
    {
          //space
        int space =n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

       
        //first triangle
        int j=1;       
        while(j<=i)
        {
           
            cout<<j;
          
            j=j+1;

        }

    // second triangle
        int k=1;
          int start=i-1;
          while(k<=i-1)
          {
            cout<<start;
            start=start-1;
               k=k+1;
          }


        cout<<endl;
        i=i+1;

    }

}