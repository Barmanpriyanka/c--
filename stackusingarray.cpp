#include<iostream>
using namespace std;
# define n 100
class stack{
    int* arr;
    int top;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
void push(int x)
{
 if(top==n-1)
 {
    cout<<"overflow";
    return;
 }
 top++;
 arr[top]=x;
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow";
        return ;
    }
    top--;
}

int Top()
{
    if(top==-1)
    {
        cout<<"no element in stack ";
        return -1;
    }
    return arr[top];
}
bool empty()
{
    return top==-1;
}
    
};

int main()
{
    stack st;
    st.push(1);
     st.push(2);
      st.push(3);
      st.pop();
      cout<<st.Top()<<endl;//2
      st.pop();//2
      st.pop();//1
      st.pop();
      cout<<st.Top()<<endl;//no element in stack
      cout<<st.empty();//1

      return 0;
}