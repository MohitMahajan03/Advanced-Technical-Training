#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
    public:
    Node* front = NULL;
    Node* back = NULL; 

    void enqueue(int ele)
    {
        Node* n = new Node(ele);
        if(back == NULL)
        {
            back = n;
            front = n;
            back->next = NULL;
        }
        else
        {
            back->next = n;
            back = n;
            back->next = NULL;
        }
    }
    int dequeue()
    {
        if(front == NULL)
        {
            cout<<"Stack underflow";
            return -1;
        }
        int data;
        Node* temp = front;
        front = temp->next;
        data = temp->data;
        delete temp;
        return data;
    }
    void display()
    {
        Node* temp = front;

        while(temp != NULL)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    q.display();

    return 0;
}