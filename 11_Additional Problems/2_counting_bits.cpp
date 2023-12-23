#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;

    n+=1;
    int res=0, x=2;
    while(x<=2*n)
    {
        res+=(n/x)*(x/2)+max(n%x-x/2, (int)0);
        x*=2;
    }

    cout<<res<<"\n";
    return 0;
}