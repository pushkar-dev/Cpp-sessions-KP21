#include<bits/stdc++.h>

using namespace std;

int main()
{
    for(int i=0; i<5; i++)
    {
        if(i==3) break;
        cout<<"i="<<i<<'\n'; 
    }

    for(int i=0; i<5; i++)
    {
        if(i==3) continue;
        cout<<"i="<<i<<'\n'; 
    }

    return 0;
}