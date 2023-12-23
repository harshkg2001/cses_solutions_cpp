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
    int n, k;
    cin>>n>>k;
    vector<int> v=input(n);
    sort(v.begin(), v.end());

    int i=0, j=n-1, cnt=0;
    while(i<=j)
    {
        cnt+=1;
        if(i==j)
            break;

        if(v[i]+v[j]>k)
            j-=1;
        else
        {
            i+=1;
            j-=1;
        }
    }

    cout<<cnt<<"\n";
    return 0;
}