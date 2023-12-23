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
        int val=mx*mx;

        if(mx%2)
        {
            if(m==mx)
                val-=n-1;
            else
            {
                val-=mx-1;
                val-=mx-m;
            }
        }
        else
        {
            if(n==mx)
                val-=m-1;
            else
            {
                val-=mx-1;
                val-=mx-n;
            }
        }

        cout<<val<<"\n";
    }
    return 0;
}