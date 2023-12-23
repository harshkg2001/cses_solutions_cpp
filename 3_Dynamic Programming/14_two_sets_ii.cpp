#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod_exp(int a, int b, int mod)
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

vector<int> input(int n)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    return v;
}

void print(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int32_t main()
{
    int n, mod=1e9+7;
    cin>>n;

    int sum=(n*(n+1))/2;
    if(sum%2==1)
        cout<<0<<"\n";
    else
    {
        vector<vector<int>> v(n+1, vector<int> (sum+1, 0));
        v[0][0]=1;

        for(int i=1; i<=n; i++)
        {
            for(int j=0; j<=sum; j++)
            {
                if(j<i)
                    v[i][j]=v[i-1][j];
                else
                    v[i][j]=(v[i-1][j]+v[i-1][j-i])%mod;
            }
        }

        int ans=v[n][sum/2]*mod_exp(2, mod-2, mod);
        ans%=mod;
        cout<<ans<<'\n';
    }
    return 0;
}