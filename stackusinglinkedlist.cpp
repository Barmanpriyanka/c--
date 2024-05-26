#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class Mystack
{
private:
    Node *head;
    int stacksize;

public:
    Mystack()
    {
        head = NULL;
        stacksize = 0;
    }

    void push(int g)
    {
        Node *temp = new Node(g);
        temp->next = head;
        head = temp;
        cout << "Element is added"<<temp->val << endl;
        stacksize++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty. Cannot perform pop operation." << endl;
            return;
        }

        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        cout<<"element  is poped"<<endl;
        stacksize--;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        cout << "Top element is " << head->val << endl;
        return head->val;
    }

    int size()
    {
        return stacksize;
    }

    int empty()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return 1;
        }
        cout << "Stack is not empty" << endl;
        return 0;
    }
};

int main()
{
    Mystack s1;
    s1.empty();
    s1.push(12);
    s1.push(23);
    s1.pop();
    s1.push(67);
    s1.top();
    cout << "Stack size: " << s1.size() << endl;
    s1.empty();
    return 0;
}
