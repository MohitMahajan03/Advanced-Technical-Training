#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* root = NULL;

void postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//use helper function
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->left->left = new Node(0);
    root->right->right = new Node(4);
    cout<<"preorder"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"postorder"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}