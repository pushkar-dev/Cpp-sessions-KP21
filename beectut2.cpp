#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        string inp;
        getline(cin,inp);
        if(cin.eof()) break;
        string ans="";
        bool is_err=false;
        for(int i=0; i<inp.size(); i++)
        {
            if(inp[i]==',' or inp[i]==' ') continue;
            
            if(isdigit(inp[i])) ans+=inp[i];
            else if(inp[i]=='o' or inp[i]=='O') ans+='0';
            else if(inp[i]=='l') ans+='1';
            else
            {
                is_err=true;
                cout<<"error\n";
                break;
            }
        }
        if(!is_err)
        {
            try
            {
                long lans= stol(ans);
                if(lans>INT_MAX) cout<<"error\n";
                else cout<<lans<<"\n";
            }
            catch(std::exception)
            {
                cout<<"error\n";
            }
        } 
    }
    return 0;
}