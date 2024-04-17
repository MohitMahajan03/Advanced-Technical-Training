#include<iostream>
using namespace std;

void func()
{
    register int w;
    extern int z;
    int x = 10; //auto variable
    static int y = 10; // static storage variable. 
    //Even though we are running the function again, you cannot reinitialize a static variable
    w = 10;
    cout << x <<" "<< y << " " << w << " " << z <<endl;
    x++;
    y++;
    w++;
    z++;
}

int z = 10;

int main()
{
    func();//output 10 10
    func();//output 10 11
    return 0;
}