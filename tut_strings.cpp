// this is a illustration for 'Friendly int parser' problem in beecrowd
#include<bits/stdc++.h>

using namespace std;
bool is_o(char x){return (x=='o' or x=='O');};
bool is_l(char x){return x=='l';};
int main()
{

    string s;

    while(1)
    {
        getline(cin,s);
        if(cin.eof()) break;
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        s.erase(remove(s.begin(),s.end(),','),s.end());
        replace_if(s.begin(),s.end(),is_o,'0');
        replace_if(s.begin(),s.end(),is_l,'1');
        
        if(!all_of(s.begin(),s.end(),::isdigit)) cout<<"error\n";
        
        else
        {
            try
            {   unsigned int ans=stoul(s);
                if(ans>INT_MAX) cout<<"error\n";
                else cout<<ans<<'\n';
            }
            catch(std::exception) {cout<<"error\n";};
        }

    }
    
    return 0;
} 