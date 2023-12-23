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
    int m=1e6+9;
    vector<int> v(m, 0);

    for(int i=1; i<m; i++)
    {
        for(int j=i; j<m; j+=i)
            v[j]+=1;
    }

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<v[a]<<"\n";
    }
    return 0;
}