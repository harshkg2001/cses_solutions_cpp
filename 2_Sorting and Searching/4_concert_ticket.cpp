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
    int n, m;
    cin>>n>>m;

    vector<int> a=input(n);
    vector<int> b=input(m);

    map<int, int> mp;
    for(int i=0; i<n; i++)
        mp[a[i]]+=1;

    for(int i=0; i<m; i++)
    {
        auto it=mp.upper_bound(b[i]);
        
        if(it==mp.begin())
            cout<<-1<<"\n";
        else
        {
            it--;
            cout<<it->first<<"\n";
            it->second--;

            if(it->second==0)
                mp.erase(it);
        }
    }
    return 0;
}