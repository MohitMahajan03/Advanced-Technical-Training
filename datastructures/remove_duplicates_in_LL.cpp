#include<iostream>
#include<unordered_set>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Llist
{
    public:
    void insert_at_tail(Node* &head, Node* &tail, int data)
    {
        Node* n = new Node(data);
        if(head == NULL && tail == NULL)
        {
            head = n;
            tail = n;
            n->next = NULL;
        }
        else
        {
            tail->next = n;
            tail = n;
            tail->next = NULL;
        }
    }
    void display(Node* &head)
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<endl;
    }

    void remove_dups(Node* &head, Node* &tail)
    {
        unordered_set <int> origin;
        Node* temp = head->next;
        Node* store = head;
        origin.insert(store->data);
        while(temp != NULL)
        {
            if(origin.find(temp->data) == origin.end())
            {
                cout<<"added = "<<temp->data<<endl;
                origin.insert(temp->data);
                temp = temp->next;
                store = store->next;
            }
            else
            {
                cout<<"found "<<temp->data<<" in list"<<endl;
                store->next = temp->next;
                delete temp;
                temp = store->next;
            }

        }
        
        
    }

};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int n, data;
    Llist l;
    cout<<"Enter the max size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>data;
        l.insert_at_tail(head, tail, data);
    }
    l.remove_dups(head, tail);
    l.display(head);
    return 0;
}