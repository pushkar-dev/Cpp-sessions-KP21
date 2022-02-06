#include<bits/stdc++.h>

using namespace std;

int main()
{
    int array[10],to_find, at_index; // array declare
    bool found=false; // assume that its not found
    
    for(int i=0; i<10; i++)
    {
        cin>>array[i]; // array input 
    }
    
    cout<<"Enter any Number to find its location:"; 
    cin>>to_find;

    for(int i=0; i<10; i++) // find number by iterating in array- traversal
    {
        if(array[i]==to_find)
        {
            at_index=i; // if we find then we simply come out of loop
            found=true; // we say that the number is found
            break;
        }
    }

    if(found) cout<<"Number found at index:"<<at_index<<'\n'; // if number is found we print its index
    else cout<<"number not found\n"; // else we pop out an error message
    
    cout<<array[13]<<"\n";// 10 , 14

    return 0;
}