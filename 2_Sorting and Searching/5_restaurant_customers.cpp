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

int32_t main()
{
    int n;
    cin>>n;

    vector<pair<int, int>> v;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());
    int mx=v[0].second;
    for(int i=1; i<v.size(); i++)
    {
        v[i].second+=v[i-1].second;
        mx=max(mx, v[i].second);
    }

    cout<<mx<<"\n";
    return 0;
}