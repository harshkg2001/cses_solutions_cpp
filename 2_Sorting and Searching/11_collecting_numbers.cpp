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
    int n;
    cin>>n;
    vector<int> v=input(n);

    vector<pair<int, int>> a;
    for(int i=0; i<n; i++)
        a.push_back({v[i], i});

    sort(a.begin(), a.end());

    int val=1;
    for(int i=1; i<n; i++)
    {
        if(a[i].second<a[i-1].second)
            val+=1;
    }

    cout<<val<<"\n";
    return 0;
}