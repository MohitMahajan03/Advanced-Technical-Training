#include<iostream>
#include<queue>
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

class BST
{
    private:
    Node* root;
    Node* InsertNode(Node* root, int val)
    {
        if(root == NULL)
        {
            return new Node(val);
        }
        if(val < root->data)
        {
            root->left = InsertNode(root->left, val);
        }
        else
        {
            root->right = InsertNode(root->right, val);
        }
        return root;
    }

    
    bool search(Node* root, int key)
    {
        if(root == NULL)
        {
            return false;
        }
        else if(root->data == key)
            return true;
        else if(key < root->data)
            return search(root->left, key);
        else
            return search(root->right, key);
    }

    public:
    BST()
    {
        root = NULL;
    }

    void insert(int val)
    {
        root = InsertNode(root, val);
    }
    //insert the element with the rules of BST

    bool verify_search(int key)
    {
        return search(root, key);
    }

};

int main()
{
    BST oj;
    oj.insert(10);
    oj.insert(4);
    oj.insert(7);
    oj.insert(18);
    oj.insert(23);
    oj.insert(1);
    oj.insert(56);
    oj.insert(90);
    cout<<oj.verify_search(23)<<endl;
    return 0;
}