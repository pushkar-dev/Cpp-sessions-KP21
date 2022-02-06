#include<bits/stdc++.h>

using namespace std;

int main()
{
    string res="weytkuahjlsdjfshjalyfdbcxnnmksjldhkasljk";
    for(int i=0; i<res.size(); i++)
    {
        if(i%2==0) res[i]='e';
    }
    cout<<res<<'\n';

    int e_count=0;
    for(char c:res)
    {
        if(c=='e') e_count++;
    }
    cout<<"number of 'e's are:"<<e_count<<'\n';
    // string1+string2
        

    return 0;
}