#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> input(int n)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    return v;
}

int32_t main()
{
    int n, mod=1e9+7;
    cin>>n;
    vector<int> v(n+1);
    v[0]=1;

    for(int i=1; i<=n; i++)
    {
        for(int j=i-1; j>=max((int)0, i-6); j--)
            v[i]+=v[j];

        v[i]%=mod;
    }

    cout<<v[n]<<"\n";
    return 0;
}