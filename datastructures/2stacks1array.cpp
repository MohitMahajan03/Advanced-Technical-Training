/*
USE 2 tops from opposite sides for optimal usage
*/
#include<iostream>

using namespace std;

class Stack
{
    public:
    int *arr;
    int top1 = -1, top2 = -1;
    int max1, max2;

    Stack(int n)
    {
        arr = new int[n];
        top2 = (n%2)? (n+1)/2 : n/2;
        max1 = top2;
        cout<<"max1 "<<max1<<endl;
        max2 = n;
    }

    void push1(int ele)
    {
        if(top1 == max1)
        {
            cout<<"stack 1 Overflow"<<endl;
        }
        else
            arr[++top1] = ele; 
    }
    int pop1()
    {
        if(isEmpty1())
        {
            return -1;
        }
        else
        {
            return arr[top1--];
        }
    }
    void push2(int ele)
    {
        if(top2 == max2)
        {
            cout<<"stack 2 Overflow"<<endl;
        }
        else
            arr[++top2] = ele;
    }
    int pop2()
    {
        if(isEmpty2())
        {
            return -1;
        }
        else
        {
            return arr[top2--];
        }
    }
    bool isEmpty1()
    {
        if(top1 == -1)
            return true;
        else
            return false;
    }
    bool isEmpty2()
    {
        if(top2 == max1)
            return true;
        else
            return false;
    }
};


int main()
{
    Stack st(10);
    st.push1(5);
    st.push1(3);
    st.push2(7);
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    cout<<st.pop2()<<endl;
    return 0;
}