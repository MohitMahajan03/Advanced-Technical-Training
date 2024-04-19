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
        this->next = NULL;
    }
};


class Functions
{
    public:
    void insert_at_head(int data, Node* &head, Node* &tail)// Now, this can be written as void insert_at_head(int data, Node** head) and send reference of the head.
    {
        Node* n = new Node(data);
        if(head == NULL)
        {
            n->next = n;
            head = n;
            tail = n;
        }
        else
        {
            n->next = head;
            head = n;
            tail->next = head;
        }
    }
    void insert_at_tail(int data, Node* &head, Node* &tail)
    {
        Node* n = new Node(data);
        if(tail == NULL)
        {
            tail = n;
            head = n;
            n->next = n;
        }
        else
        {
            tail->next = n;
            tail = n;
            tail->next = head;
        }
    }

    void insert_at_position(int pos, int data, Node** head, Node** tail)
    {
        Node* runner = *head;
        if(pos == 0)
            insert_at_head(data, *head, *tail);
        else
        {
            pos--;
            while((pos != 0) && (runner->next != NULL))
            {
                runner = runner->next;
            }
            if(pos != 0)
                cout<<"cannot insert in that position"<<endl;
            
            else
            {
                Node* n = new Node(data);
                if(runner == *tail)
                {
                    insert_at_tail(data, *head, *tail);
                }
                else
                {
                    n->next = runner->next;
                    runner->next = n;
                }
            }
        }

    }

    int delete_at_head(Node** head, Node** tail)
    {
        int data;
        Node* temp = *head;
        *head = temp->next;
        data = temp->data;
        delete temp;
        temp = *tail;
        temp->next = *head;
        return data;
    }

    int delete_at_tail(Node** head, Node** tail)
    {
        int data;
        Node* temp = *head;
        while(temp->next != *tail)
        {
            temp = temp->next;
        }
        *tail = temp;
        temp = temp->next;
        data = temp->data;
        delete temp;
        temp = *tail;
        temp->next = *head;
        return data;
    }

    int delete_at_position(int pos, Node** head, Node** tail)
    {
        Node* runner1 = *head;
        Node* runner2;
        if(pos == 0)
            delete_at_head(head, tail);
        else
        {
            pos--;
            while((pos != 0) && (runner1->next != NULL))
            {
                runner1 = runner1->next;
                pos--;
            }
            if(pos != 0)
                cout<<"cannot delete in that position"<<endl;
            
            else
            {
                if(runner1 == *tail)
                {
                    delete_at_tail(head, tail);
                }
                else
                {
                    int temp = runner1->data;
                    runner2->next = runner2->next->next;
                    delete runner1;
                    runner2 = runner1;
                    runner2 = runner2->next;
                    return temp;
                }
            }
        }
        cout<<"No such element present"<<endl;
        return -1;
    }

    void display(Node* head)
    {
        Node* temp = head;
        cout<<temp->data<<"-->";
        temp = temp->next;
        while(temp != head)
        {
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Functions f;
    f.insert_at_head(10, head, tail);
    f.insert_at_head(20, head, tail);
    f.insert_at_head(30, head, tail);
    f.insert_at_head(40, head, tail);
    f.display(head);
    f.insert_at_tail(50, head, tail);
    f.insert_at_tail(60, head, tail);
    f.insert_at_tail(70, head, tail);
    f.insert_at_tail(80, head, tail);
    f.insert_at_position(1, 100, &head, &tail);
    f.display(head);
    cout<<f.delete_at_head(&head, &tail)<<endl;
    cout<<f.delete_at_tail(&head, &tail)<<endl;
    cout<<f.delete_at_position(3, &head, &tail)<<endl;
    f.display(head);
    return 0;
}