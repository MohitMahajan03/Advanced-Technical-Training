// test case arr[] = {1,5,2,7,5,6,3,7,8,3,8,3,7}
// submit @ ashank2507david@gmail.com
#include<iostream>

using namespace std;

int jumps(int* arr, int n)
{
    int count = 0;
    int i = 0;
    int j = 0, diff = 0, min = 0, min_index = 0;
    while(i < n)
    {
        min = 0;
        min_index = 0;
        count++;
        j = i;
        for(j = i + 1; j <= i + arr[i] && j < n; j++)
        {
            diff = arr[i] - (j + arr[j]);
            if(diff < min)
            {
                min = diff;
                min_index = j;
            }
        }
        i = min_index;
        if(i >= n)
        {
            cout<<"next jump to index = "<<n-1<<" element = "<<arr[n-1]<<endl;
        }
        else
        {
            cout<<"next jump to index = "<<i<<" element = "<<arr[i]<<endl;
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number of array elements"<<endl;
    cin>>n;
    int arr[20];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_jumps = jumps(arr, n);
    cout<<"minimum jumps required  = "<<min_jumps<<endl;
    return 0;
}