#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v1;

    int n_inp=0,temp;
    cout<<"enter number of inputs:";
    cin>>n_inp;
    for(int i=0; i<n_inp; i++)
    {
        cin>>temp;
        v1.push_back(temp); 
    }

    for(auto val:v1) cout<<val<<" ";
    cout<<'\n';

    // we will make a new vector

    vector<int> nums={1,2,3,7,9,4};
    for (int i=0; i<nums.size(); i++) // simple and fast
    {
        nums[i]*=3;
    }
    for(auto it=nums.begin(); it!=nums.end(); it++) // not simple and not so fast
    {
        // 'it' is an iterator, it gives memory adress of data in vector
        // '*' at address , given memory adress ki value batata hai
        (*it) *=2; // (value at it) is to be multipied by 2  
    } 
    for(auto val:nums) cout<<val<<" "; // simple and fast
    
    // int arr[10];
    // *arr, *(arr+1), *(arr+2), ...
    return 0;
}