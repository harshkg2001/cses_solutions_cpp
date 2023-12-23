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

void build(int idx, int l, int r, vector<int> &trr, vector<int> &v)
{
    if(l==r)
    {
        trr[idx]=v[l];
        return;
    }

    int mid=(l+r)/2;
    build(idx*2+1, l, mid, trr, v);
    build(idx*2+2, mid+1, r, trr, v);

    trr[idx]=min(trr[idx*2+2], trr[idx*2+1]);
} 

int query(int l, int r, int st, int en, int idx, vector<int> &trr)
{
    if(st>r || en<l)
        return LLONG_MAX;

    if(st>=l && en<=r)
        return trr[idx];
    
    int mid=(st+en)/2;
    int val1=query(l, r, st, mid, idx*2+1, trr);
    int val2=query(l, r, mid+1, en, idx*2+2, trr);

    return min(val1, val2);
}

vector<int> seg_tree(int n, vector<int> &v)
{
    vector<int> tree(4*n);
    build(0, 0, n-1, tree, v);

    return tree;
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
    int n, q;
    cin>>n>>q;

    vector<int> v=input(n);
    vector<int> trr=seg_tree(n, v);

    for(int i=0; i<q; i++)
    {
        int a, b;
        cin>>a>>b;

        int res=query(a-1, b-1, 0, n-1, 0, trr);
        cout<<res<<"\n";
    }
    return 0;
}