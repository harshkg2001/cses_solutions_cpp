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
    string s;
    cin>>s;

    int n=s.size();
    vector<int> v(n+1);
    v[0]=1;

    for(int i=1; i<=n; i++)
        v[i]=(i*v[i-1])%mod;

    int val=v[n];
    vector<int> a(26);
    for(int i=0; i<n; i++)
        a[s[i]-'a']+=1;

    for(int i=0; i<26; i++)
        val=(val*mod_exp(v[a[i]], mod-2, mod))%mod;

    cout<<val<<"\n";
    return 0;
}