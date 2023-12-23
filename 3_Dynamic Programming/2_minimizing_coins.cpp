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
    int n, k;
    cin>>n>>k;
    vector<int> v=input(n);

    sort(v.begin(), v.end());
    vector<int> a(k+1, INT_MAX);

    a[0]=0;
    for(int i=0; i<n; i++)
    {
        for(int j=v[i]; j<=k; j++)
            a[j]=min(a[j], a[j-v[i]]+1);
    }

    if(a[k]==INT_MAX)
        cout<<-1<<"\n";
    else    
        cout<<a[k]<<"\n";
    return 0;
}