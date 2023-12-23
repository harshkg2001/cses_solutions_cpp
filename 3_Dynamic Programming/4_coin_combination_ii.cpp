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
    int n, k, mod=1e9+7;
    cin>>n>>k;
    vector<int> a=input(n);
    vector<int> v(k+1);

    sort(a.begin(), a.end());

    v[0]=1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j+a[i]<=k; j++)
        {
            if(v[j]>0)
                v[j+a[i]]=(v[j+a[i]]+v[j])%mod;
        }
    }
    
    cout<<v[k]<<"\n";
    return 0;
}