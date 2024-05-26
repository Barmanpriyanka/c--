/*                 1
                2  2 
         3   3  3   
         4  4    4  4

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
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //number
        int j=1;

        while(j<=i)
        {
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/



/*                 1
                2  3 
             4   5  6   
         7  8   9  10 









#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        //space
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //number
        int j=1;

        while(j<=i)
        {
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}

   1 2 3 4 
     2 3 4
       3 4
         4   */



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
        int space =i-1;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }

        //number
        int j=1;
        int start=i;

        while(j<= n-i+1)
        {
           
            cout<<start;
           start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}








