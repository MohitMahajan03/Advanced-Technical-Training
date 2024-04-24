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

    void BFS()
    {
        if(root == NULL)
        {
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";

            if(curr->left != NULL)
            {
                q.push(curr->left);
            }
            
            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }              
        cout<<endl;
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
    oj.BFS();
    return 0;
}