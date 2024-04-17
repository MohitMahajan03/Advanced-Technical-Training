// Swap 2 numbers using pass by value and pass by reference
#include <iostream>

using namespace std;

void call_by_value_swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout<<"call by value swap "<<a<<" "<<b<<endl;
}

void call_by_reference_swap(int* a, int* b)
{
    int* temp;
    *temp = *b;
    *b = *a;
    *a = *temp;
}

int main()
{
    int a = 10, b = 20;
    cout<<a<<" "<<b<<endl;
    call_by_value_swap(a, b);
    call_by_reference_swap(&a, &b);
    cout<<"call by reference swap "<<a<<" "<<b<<endl;

    return 0;
}