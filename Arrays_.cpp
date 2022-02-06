#include<bits/stdc++.h>

using namespace std;

int main()
{
    array<int,10> arr={1,2,3,4,5,6,7,8,9,10}; // c++ STL array
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<'\n';
    }

    // multiply each element of array by 3 if its index is odd else multiply by 2

    for(int i=0; i<arr.size(); i++)
    {
        if(i%2==0) // i.e. i is even
        {
            arr[i]*=2;
        }
        else
        {
            arr[i]*=3;
        }
    }
    cout<<"After operation:-\n";
    // print the array
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<'\n';
    }

    // classic C style array
    const int SIZE=5;
    int carr[SIZE]={2,5,7,9,10}; // carr is a integer array of size 5
    // rest syntax is similar
    // but here we need to know the size of array at each step (i.e array is unaware of its own size)
    // it is maintained using pointers which will be covered later
    

    return 0;
}