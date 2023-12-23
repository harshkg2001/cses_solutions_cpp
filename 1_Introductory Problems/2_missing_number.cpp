#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int x=0;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        x=x^i;

    vector<int> v(n-1);
    for(int i=0; i<n-1; i++)
    {
        cin>>v[i];
        x=x^v[i];
    }

    cout<<x<<"\n";
    return 0;
}