#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l, r;
    cin>>l>>r; // input

    if(r<l) swap(l,r); // 3,4 4,3 

    long ans=0;

    for(int c=l; c<=r; c++) ans+=c; // r-l is very large, it will take time
    // AP - formula (l,r) ans
    cout<<ans<<'\n';

    return 0;
}