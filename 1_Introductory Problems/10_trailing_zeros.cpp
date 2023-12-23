#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;

    int val=0, x=5;
    while(x<=n)
    {
        val+=n/x;
        x*=5;
    }

    cout<<val<<"\n";
    return 0;
}