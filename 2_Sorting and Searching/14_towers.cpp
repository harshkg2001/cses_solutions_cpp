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

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v=input(n);

    int val=0;
    map<int, vector<int>> m;
    for(int i=0; i<n; i++)
        m[v[i]].push_back(i);

    int x=m.size();
    vector<int> a(x);

    while(m.size())
    {
        val+=1;
        int i=0, prev=INT_MAX;
        for(auto it=m.begin(); it!=m.end();)
        {
            if(it->second[a[i]]<prev)
            {
                a[i]+=1;
                prev=it->second[a[i]];
            }
            if(it->second.size()==a[i])
                m.erase(it);
            else    
                it++;
        }
    }

    cout<<val<<"\n";
    return 0;
}