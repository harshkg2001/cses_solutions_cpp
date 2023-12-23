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

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        int l=-1, r=ans.size();
        while(l<(r-1))
        {
            int mid=(l+r)/2;
            if(ans[mid]<v[i])
                l=mid;
            else
                r=mid;
        }

        if(r==ans.size())
            ans.push_back(v[i]);
        else
            ans[r]=v[i];
    }

    cout<<ans.size()<<"\n";
    return 0;
}