#include<iostream>
using namespace std;
int main()
{
    int max,min,i,j;
    int arr[3][3]={{4,6,7},{5,4,3},{2,4,1}};
    max=min=arr[0][0];
    for( i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"max is :"<<max<<endl;
    cout<<"min is:"<<min<<endl;
    return 0;
}