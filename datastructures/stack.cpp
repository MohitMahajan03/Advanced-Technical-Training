#include<iostream>
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

    public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    
    void push(int data)
    {
        if(top == n)
        {
            cout<<"Stack over flow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop()
    {
        if(top == -1)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top == -1)
        {
            cout<<"Underflow";
            return;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for(int i = top; i >= 0; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    return 0;
}