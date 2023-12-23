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
    vector<vector<int>> a(n, vector<int> (n, 0));
    for(int i=0; i<n; i++)
        a[i][i]=v[i];

    for(int i=1; i<n; i++)
        a[i-1][i]=max(v[i-1], v[i]);

    for(int d=2; d<n; d++)
    {
        for(int i=0; (i+d)<n; i++)
        {
            int val1=v[i]+min(a[i+2][i+d], a[i+1][i+d-1]);
            int val2=v[i+d]+min(a[i+1][i+d-1], a[i][i+d-2]);

            a[i][i+d]=max(val1, val2);
        }
    }

    cout<<a[0][n-1]<<"\n";
    return 0;
}