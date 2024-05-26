#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};
void inorder(node* root)
{
cout<<"enter the data"<<endl;
int data;
cin>>data;
root=new node(data);
if(root==NULL)
{
    return;

}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);

}
int main()
{
    node* root=NULL;
    inorder(root);
    return 0;
}