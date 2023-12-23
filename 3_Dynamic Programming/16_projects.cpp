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
    vector<vector<int>> v(n, vector<int> (3, 0));

    for(int i=0; i<n; i++)
        cin>>v[i][0]>>v[i][1]>>v[i][2];

    sort(v.begin(), v.end());

    vector<int> a(n);
    for(int i=0; i<n; i++)
        a[i]=v[i][2];

    for(int i=0; i<n; i++)
    {
        int l=i, r=n, val=v[i][1];
        while(l<(r-1))
        {
            int mid=(l+r)/2;
            if(v[mid][0]<=val)
                l=mid;
            else
                r=mid;
        }

        for(int j=r; j<n; j++)
            a[j]=max(a[j], a[i]+v[j][2]);
    }

    int val=*max_element(a.begin(), a.end());
    cout<<val<<"\n";
    return 0;
}