#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    int val=0;
    for(int i=1; i<n; i++)
    {
        val+=max(v[i-1]-v[i], (int)0);
        v[i]=max(v[i-1], v[i]);
    }

    cout<<val<<"\n";
    return 0;
}