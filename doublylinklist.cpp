#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
   cout<<temp->data<<endl;
   temp=temp->next;
    }
}

  int length(Node* head)
  {
    int len=0;
    Node * temp = head;

    while(temp!=NULL)
    {
       len++;
       temp=temp->next;

    }
      return len;

  }
void insertathead(Node* &head)
{
    Node* node2=new Node(24);
    node2->next=head;
    head->prev=node2;
    head=node2;

}



int main()
{

    Node* node1=new Node(10);
   Node * head=node1;
   insertathead(head);
    print(head);
     cout<<endl;
  cout<<length(head);


}