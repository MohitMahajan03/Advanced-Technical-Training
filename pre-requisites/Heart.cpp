#include<iostream>
using namespace std;

int main()
{
    int rows = 6;
    int cols = 7;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == 0 && j % 3 != 0)
                cout<<" * ";
            else if(i == 1 && j % 3 == 0)
                cout<<" * ";
            else if((i+j) == 8)
                cout<<" * ";
            else if((i-j) == 2)
                cout<<" * ";
            else
                cout<<"   ";
        }
        cout<<endl;
    }

    // char arr[6][7] = {
    //     ' ','*','*',' ','*','*',' ',
    //     '*',' ',' ','*',' ',' ','*',
    //     '*',' ',' ',' ',' ',' ','*',
    //     ' ','*',' ',' ',' ','*',' ',
    //     ' ',' ','*',' ','*',' ',' ',
    //     ' ',' ',' ','*',' ',' ',' ',
    // };

    // for(int i = 0; i < 6; i++)
    // {
    //     for(int j = 0; j < 7; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}