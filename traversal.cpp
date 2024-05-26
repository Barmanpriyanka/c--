#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node*right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
        

    }
};
void inorder(node* root)
{
   if(root==NULL)
   {
    return;
      
   }
   
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);

}
void preorder(node* root)
{
    if(root==NULL)
   {
    return;
      
   }
   cout<<root->data<<" ";
   inorder(root->left);
   inorder(root->right);
}
void postorder( node* root)
{
if(root==NULL)
   {
    return;
      
   }
   
   inorder(root->left);
   inorder(root->right);
   cout<<root->data<<" ";
}


int main()
{

node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
cout<<"inorder traversal is :";
inorder(root);
cout<<endl;
cout<<" preorder traversal is :";
preorder(root);
cout<<endl;
cout<<" postorder traversal is :";
postorder(root);
return 0;

}