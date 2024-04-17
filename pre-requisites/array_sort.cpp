//Out of place solution
/*
#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cout<<"Enter the max number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++)
    {
        switch(arr[i])
        {
            case 0: count0++;
                break;
            case 1: count1++;
                break;
            case 2: count2++;
                break;
        }
    }
    cout<<count0<<count1<<count2<<endl;
    for(int i = 0; i < n; i++)
    {
        if(count0 > 0)
        {
            arr[i] = 0;
            count0--;
        }
        else if(count1 > 0)
        {
            arr[i] = 1;
            count1--;
        }
        else if(count2 > 0)
        {
            arr[i] = 2;
            count2--;
        }
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
*/

//in place solution
#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cout<<"Enter the max number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int i = 0;
    int count;
    while(count < n)
    {
        if(arr[i] == 0)
        {
            for(int j = i; j > 0; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[0] = 0;
        }
        if(arr[i] == 2)
        {
            for(int j = i; j < n; j++)
            {
                arr[j] = arr[j+1];
            }
            arr[n-1] = 2;
        }
        if(arr[i] == 1)
        {
            i++;
        }
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        count++;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}