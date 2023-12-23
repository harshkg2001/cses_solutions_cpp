#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    int mn=LLONG_MAX;
    int sum=accumulate(v.begin(), v.end(), 0);

    int lim=1;
    while(n--)
        lim*=2;

    for(int i=0; i<lim; i++)
    {
        int val=0;
        int x=i, j=0;
        while(x && j<v.size())
        {
            if(x%2)
                val+=v[j];

            j+=1;
            x/=2;
        }
        mn=min(mn, abs(sum-2*val));
    }

    cout<<mn<<"\n";
    return 0;
}