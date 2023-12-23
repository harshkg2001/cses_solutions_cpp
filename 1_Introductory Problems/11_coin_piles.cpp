#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int mx=max(n, m);
        int mn=min(n, m);

        if(mx==2*mn || ((2*mx-mn)%3==0 && (2*mx-mn)/3<=mn))
            cout<<"YES"<<"\n";
        else    
            cout<<"NO"<<"\n";
    }
    return 0;
}