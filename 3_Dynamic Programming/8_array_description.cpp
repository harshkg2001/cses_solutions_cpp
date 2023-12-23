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

void print(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int32_t main()
{
    int n, m;
    cin>>n>>m;

    vector<int> a=input(n);
    vector<int> b=input(n);

    vector<pair<int, int>> x;
    for(int i=0; i<n; i++)
        x.push_back({a[i], b[i]});

    sort(x.begin(), x.end());

    vector<int> v1(m+1, 0);
    for(int i=1; i<=n; i++)
    {
        vector<int> v2(m+1, 0);
        for(int j=0; j<=m; j++)
        {
            if(j<x[i-1].first)
                v2[j]=v1[j];
            else
                v2[j]=max(v1[j], v1[j-x[i-1].first]+x[i-1].second);
        }
        v1=v2;
    }

    cout<<v1[m]<<"\n";
    return 0;
}