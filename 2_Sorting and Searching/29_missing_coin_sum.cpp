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

// IMPORTANT
int32_t main()
{
    int n;
    cin>>n;
    vector<int> v=input(n);

    sort(v.begin(), v.end());

    int val=1;
    for(int i=0; i<n; i++)
    {
        if(val<v[i])
        {
            cout<<val<<"\n";
            return 0;
        }
        else
            val+=v[i];
    }

    cout<<val<<"\n";
    return 0;
}