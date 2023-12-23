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
    string s, t;
    cin>>s>>t;

    int n=s.size(), m=t.size();
    vector<vector<int>> v(n+1, vector<int>(m+1, 0));
    
    for(int i=0; i<=n; i++)
        v[i][0]=i;
    
    for(int i=0; i<=m; i++)
        v[0][i]=i;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s[i-1]!=t[j-1])
                v[i][j]=min({v[i-1][j], v[i][j-1], v[i-1][j-1]})+1;
            else
                v[i][j]=v[i-1][j-1];
        }
    }

    cout<<v[n][m]<<"\n";
    return 0;
}