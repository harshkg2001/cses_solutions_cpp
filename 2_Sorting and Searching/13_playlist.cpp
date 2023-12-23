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
    vector<int> a=input(n);
    map<int, int> m;

    int mx=INT_MIN;

    int i=0, j=0;
    while(j<n)
    {
        m[a[j]]+=1;

        while(m[a[j]]>1)
        {
            m[a[i]]-=1;
            if(m[a[i]]==0)
                m.erase(a[i]);

            i+=1;
        }
        mx=max(mx, (int)m.size());
        j+=1;
    }

    cout<<mx<<"\n";
    return 0;
}