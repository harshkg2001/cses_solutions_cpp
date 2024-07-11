#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int mod_exp(int a, int b)
{
    int res=1;
    while(b)
    {
        if(b%2)
            res=(res*a)%mod;

        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

int32_t main()
{
    fastio;

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    int sum=accumulate(v.begin(), v.end(), (int)0);
    int x = mod_exp(2, n);

    int ans=LLONG_MAX;
    for(int i=0; i<x/2; i++)
    {
        int j=0, val=i, temp=0;
        while(val)
        {
            if(val%2)
                temp+=v[j];

            j+=1;
            val/=2;
        }

        ans=min(ans, abs(sum-2*temp));
    }
    cout<<ans<<"\n";

    return 0;
}