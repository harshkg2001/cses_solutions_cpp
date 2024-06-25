#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());
    int sum1=accumulate(v.begin(), v.end(), (int)0), sum2=0;

    int ans=LLONG_MAX;
    for(int i=0; i<n; i++)
    {
        int val1=(sum1-v[i])-((n-i-1)*v[i]);
        int val2=i*v[i]-sum2;

        ans=min(ans, val1+val2);

        sum1-=v[i];
        sum2+=v[i];
    }

    cout<<ans<<"\n";
    return 0;
}