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
    int n, q;
    cin>>n>>q;
    vector<int> v=input(n);
    v.insert(v.begin(), 0);

    for(int i=1; i<=n; i++)
        v[i]=v[i]^v[i-1];

    for(int i=0; i<q; i++)
    {
        int a, b;
        cin>>a>>b;
        cout<<(v[b]^v[a-1])<<"\n";
    }
    return 0;
}