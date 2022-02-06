#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,r;
    cout<< "Enter Two numbers to find HCF:";
    cin>>a>>b;
    // a=bq+r
    if(a<b) swap(a,b);
    r=a%b;
    // o/p b->HCF
    // Euclids Division lemma
    while(r!=0) // it will surely terminate 
    {
      a=b;
      b=r;
      r= a%b;  
    }
    cout<<"HCF="<<b; // b is HCF 
    return 0;
}