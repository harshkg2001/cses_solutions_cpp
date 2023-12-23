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
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a=input(n);
    vector<int> b=input(m);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt=0, i=0, j=0;
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j])<=k)
        {
            cnt+=1;
            i+=1;
            j+=1;
        }
        else
        {
            if(a[i]>b[j])
                j+=1;
            else
                i+=1;
        }
    }

    cout<<cnt<<"\n";
    return 0;
}