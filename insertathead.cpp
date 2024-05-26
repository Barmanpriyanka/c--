
#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node*next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }

};



 void insertattail(node* &tail,int d)
 {
    node* node2=new node(d);
    tail->next=node2;
    tail=node2;


 }
void insertathead(node *&head,int d)
{
    node* node2= new node(d);
    node2->next=head;

    head=node2;


}
void insertatposition(node* &tail,node* &head,int position ,int d)
{
     node* nodetoinsert=new node(d);
    if(position==1)
    {
        insertathead(head,45);
        return;
    }
     node*temp=head;
     int i=1;
     while(i<position-1)
     {
         temp=temp->next;
         i++;
     }
      nodetoinsert->next=temp->next;
       temp->next=nodetoinsert;

       if(temp->next==NULL)
       {

        insertattail(tail,56);
        return;

       }
     

}

void printlinklist(node* &head)
{
     node* temp=head;

     while(temp!=NULL){
     cout<<temp->data<<endl;
     temp=temp->next;

     }
}


int main()
{

    
    node* node1= new node(10);
    node*head=node1;
    node* tail=node1;
    insertattail(tail,20);
    insertattail(tail,30);
    insertatposition( tail,head,1,67);
    printlinklist(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

}