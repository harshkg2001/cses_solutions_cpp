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
    vector<vector<char>> v(n, vector<char> (n, '.'));

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>v[i][j];
    }

    vector<vector<int>> a(n, vector<int> (n, 0));
    for(int i=0; i<n; i++)
    {
        if(v[i][0]=='*')
            break;

        a[i][0]=1;
    }
    for(int i=0; i<n; i++)
    {
        if(v[0][i]=='*')
            break;

        a[0][i]=1;
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(v[i][j]=='*')
                continue;

            a[i][j]=(a[i-1][j]+a[i][j-1])%mod;
        }
    }

    cout<<a[n-1][n-1]<<"\n";
    return 0;
}