#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[30]="Welcome to Session 4!";

    for(int i=0; i<30; i++)
    {
        // character array, 30, '\0'
        if(str[i]=='\0')
        {
            cout<<"String is over at i="<<i<<'\n';
            break;
        }
        // if its value in between 97 to 122
        if(str[i]>=97 and str[i]<=122) // if its small
        {
            str[i]-=32; // we make it capital // (*(str+i)) is similar to str[i]
        }

    }

    cout<<str<<'\n';
    return 0;
}