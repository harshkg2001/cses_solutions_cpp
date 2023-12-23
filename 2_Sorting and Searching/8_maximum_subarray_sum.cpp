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

    int sum=0, mx=LLONG_MIN;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        mx=max(mx, sum);
        sum=max(sum, (int)0);
    }
    
    cout<<mx<<"\n";
    return 0;
}