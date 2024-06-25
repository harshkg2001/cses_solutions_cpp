#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        v[i]={y, x};
    }
    sort(v.begin(), v.end());

    int end=v[0].first, cnt=1;
    for(int i=1; i<n; i++)
    {
        if(v[i].second>=end)
        {
            cnt+=1;
            end=v[i].first;
        }
    }

    cout<<cnt<<"\n";
    
    return 0;
}