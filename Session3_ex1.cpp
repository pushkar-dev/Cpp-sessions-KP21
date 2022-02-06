// session 3 example 1, Print factorial of a given number
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; // we need to find n!
    cout<<"Input a number to find its factorial:";
    cin>>n; // input n

    long long factorial=1; // note that even for a small input the factorial may be large 
    
    // approach 1
    for(int i=2; i<=n; i++) // n!=2*3*4*...*(n-1)*(n)
    {
        factorial*=i;
        cout<<"Loop bazinga\n";
    }

    /*
    // approach 2
    for(int i=n; i>=2; i--) // n!=n*(n-1)*(n-2)*...*2
    {
        factorial*=i;
    }
    */

    cout<<n<<"!="<<factorial<<'\n';

    return 0;
}