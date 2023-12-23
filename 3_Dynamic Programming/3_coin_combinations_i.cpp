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
    int n, k, mod=1e9+7;
    cin>>n>>k;
    vector<int> a=input(n);
    vector<int> v(k+1);

    sort(a.begin(), a.end());

    v[0]=1;

    for(int i=1; i<=k; i++)
    {
        for(int j=0; j<n && a[j]<=i; j++)
            v[i]=(v[i]+v[i-a[j]])%mod;
    }

    cout<<v[k]<<"\n";
    return 0;
}