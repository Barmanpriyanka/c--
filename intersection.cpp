#include<iostream>
using namespace std;
int main()
    {
         int A[]={7,8,9};
         int B[]={1,2,9};
         
            for(int i=0;i<3;i++)
         {

            for(int j=0;j<3;j++)
           { 
               
              if(A[i]==B[j])
                    {
                        cout<<A[i];
                    }
           }
         
          }
    return 0;
    }