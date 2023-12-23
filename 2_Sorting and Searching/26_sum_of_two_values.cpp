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

    vector<pair<int, int>> a;
    for(int i=0; i<n; i++)
        a.push_back({v[i], i});

    sort(a.begin(), a.end());

    int i=0, j=n-1;
    while(i<j)
    {
        if(a[i].first+a[j].first==k)
        {
            cout<<a[i].second+1<<" "<<a[j].second+1<<"\n";
            return 0;
        }
        else
        if(a[i].first+a[j].first<k)
            i+=1;
        else
            j-=1;
    }

    cout<<"IMPOSSIBLE"<<"\n";
    return 0;
}