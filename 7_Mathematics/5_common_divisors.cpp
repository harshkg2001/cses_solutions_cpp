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
    int n;
    cin>>n;
    vector<int> v=input(n);
    int mx=*max_element(v.begin(), v.end());
    vector<int> a(mx+1);

    vector<int> m(mx+1);
    for(int i=0; i<n; i++)
        m[v[i]]+=1;

    for(int i=1; i<=mx; i++)
    {
        for(int j=i; j<=mx; j+=i)
            a[i]+=m[j];
    }

    int val=INT_MIN;
    for(int i=mx; i>0; i--)
    {
        if(a[i]>1)
        {
            val=i;
            break;
        }
    }

    cout<<val<<"\n";
    return 0;
}