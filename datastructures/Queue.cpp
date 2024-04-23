#include<iostream>
using namespace std;

class Queue
{
    public:
    int front, back, n;
    int* arr;
    Queue(int n)
    {
        arr = new int[n];
        this->n = n;
        front = -1;
        back = -1;
    }
    void enqueue(int ele)
    {
        if(back < n)
        {
            back++;
            arr[back] = ele;
            if(front == -1)
            {
                front = 0;
            }
        }
        else
        {
            cout<<"Stack Overflow";
        }
    }
    int dequeue()
    {
        if(front > -1 && front <= back)
        {
            int ele = arr[front];
            front++;
            return ele; 
        }
        if(front > back)
        {
            front = -1;
            back = -1;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return -1;
    }
    void display()
    {
        for(int i = front; i <= back; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;
    }
};


int main()
{
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(40);
    q.display();
}