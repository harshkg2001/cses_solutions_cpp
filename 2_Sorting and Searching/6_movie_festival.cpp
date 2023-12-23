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
    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++)
        cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());
    
    return 0;
}