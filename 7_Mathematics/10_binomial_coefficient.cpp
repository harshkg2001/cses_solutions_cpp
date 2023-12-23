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
    int mod=1e9+7;
    vector<int> v(1e6+9);
    v[0]=1;
    for(int i=1; i<v.size(); i++)
        v[i]=(v[i-1]*i)%mod;

    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;

        if(a<b)
            cout<<0<<"\n";
        else
        {
            int val=(((v[a]*mod_exp(v[b], mod-2, mod))%mod)*(mod_exp(v[a-b], mod-2, mod)%mod))%mod;
            val%=mod;

            cout<<val<<"\n";
        }
    }
    return 0;
}