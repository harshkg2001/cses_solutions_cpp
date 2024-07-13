#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i].first>>v[i].second;

    vector<int> ans;
    vector<int> res(n);
    for(int i=0; i<n; i++)
    {
        int l=-1, r=ans.size();
        while(l<(r-1))
        {
            int mid=(l+r)/2;
            if(ans[mid]<v[i].first)
                l=mid;
            else
                r=mid;
        }

        if(r==ans.size())
        {
            ans.push_back(v[i].second);
            res[i]=r;
        }
        else
        {
            ans[l]=v[i].second;
            res[i]=r;
        }
        
    }

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";

    cout<<"\n";
    cout<<res.size()<<"\n";
    for(int i=0; i<res.size(); i++)
        cout<<res[i]<<" ";

    return 0;
}