#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
            cout<<0<<"\n";
        else
        if(i==2)
            cout<<6<<"\n";
        else
        if(i==3)
            cout<<28<<"\n";
        else
        {
            int ttl=((i*i)*(i*i-1))/2;
            int sub=(max(0*1LL, (i-4))*max(0*1LL, (i-4)))*8;
 
            sub+=4*6*(max(0*1LL, (i-4)));
            sub+=4*4*(max(0*1LL, (i-4)));
 
            sub+=4*2;
            sub+=8*3;
            sub+=4*4;
            
            sub/=2;
            int res=ttl-sub;
            cout<<res<<"\n";
        }
    }
    return 0;
}