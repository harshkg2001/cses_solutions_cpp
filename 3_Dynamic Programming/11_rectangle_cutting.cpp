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
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n+1, vector<int> (m+1, 0));
    
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
            v[i][j]=i*j;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(i==j)
                v[i][j]=1;
            else
            {
                for(int k=1; k<j; k++)
                    v[i][j]=min(v[i][j], v[i][k]+v[i][j-k]);

                for(int k=1; k<i; k++)
                    v[i][j]=min(v[i][j], v[k][j]+v[i-k][j]);
            }
        }
    }

    cout<<v[n][m]-1<<"\n";
    return 0;
}