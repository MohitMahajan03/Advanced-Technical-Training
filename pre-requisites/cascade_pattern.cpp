#include <iostream>
using namespace std;

// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

// program to print square pattern
int main()
{
    int n;
    cout << "Enter N:" << endl;
    cin >> n;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            if (i < n)
            {
                if (j < n)
                    cout << n - min(i, j) << " ";
                else
                    cout << n - min(i, 2 * n - 2 - j) << " ";
            }
            else
            {
                if (j < n)
                    cout << n - min(2 * n - 2 - i, j) << " ";
                else
                    cout << n - min(2 * n - 2 - i, 2 * n - 2 - j) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}