#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod_exp(int a, int b, int mod)
{
    int res=1;
    while(b)
    {
        if(b%2)
            res=(res*a)%mod;

        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

int32_t main()
{
    int n, mod=1e9+7;
    cin>>n;

    cout<<mod_exp(2, n, mod)<<"\n";
    return 0;
}