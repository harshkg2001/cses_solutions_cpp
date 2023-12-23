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
    int n;
    cin>>n;
    vector<int> v=input(n);
    int sum=accumulate(v.begin(), v.end(), 0);

    sort(v.begin(), v.end());
    vector<vector<int>> a(n+1, vector<int> (sum+1, 0));

    a[0][0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            if(j<v[i-1])
                a[i][j]=a[i-1][j];
            else
                a[i][j]=a[i-1][j]+a[i-1][j-v[i-1]];
        }
    }

    vector<int> ans;
    for(int i=1; i<=sum; i++)
    {
        if(a[n][i])
            ans.push_back(i);
    }
    
    cout<<ans.size()<<"\n";
    print(ans);
    
    return 0;
}