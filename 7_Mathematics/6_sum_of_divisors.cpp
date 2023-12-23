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

vector<int> input(int n)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    return v;
}

void print(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int32_t main()
{
    int n, mod=1e9+7;
    cin>>n;

    int val=0;
    
    for(int i=1; i*i<=n; i++)
    {
        int x=n/i;
        int y=((x%mod)*((x+1)%mod)*mod_exp(2, mod-2, mod))%mod-(i*(i+1)*mod_exp(2, mod-2, mod))%mod;

        val+=(x-i+1)*i;
        val%=mod;
        val+=y;
        val%=mod;
    }

    cout<<val<<"\n";
    return 0;
}