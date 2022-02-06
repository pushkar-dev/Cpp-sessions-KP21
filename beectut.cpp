#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t; // 6
    while(t--) // for(int i=0; i<t; i++)
    {
        string cyp;
        int shift;

        cin>>cyp>>shift;

        // left shift
        // 'A'+shift;
        string dec="";
        char offset='A'+shift;
        for(char c:cyp)
        {
            if(c>=offset) dec+=(c-shift);
            else dec+=(c+26-shift);
        }
        cout<<dec<<'\n';
    }
    return 0;
}