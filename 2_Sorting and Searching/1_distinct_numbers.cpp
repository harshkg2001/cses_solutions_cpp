#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> s;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }

    cout<<s.size()<<"\n";
    return 0;
}