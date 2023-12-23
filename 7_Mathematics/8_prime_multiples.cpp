#include<bits/stdc++.h>
using namespace std;
#define int long long

int mod_exp(int a, int b, int mod)
{
    int res=1;
    while(b)
    {
        if(b%2)
            res=(res*a)%mod;

        a=(a*a)%mod;
        b/=2;
    }
    return res;
}

vector<int> input(int n)
{
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];

    return v;
}

void print(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int dgts_in(int val)
{
    int cnt=0;
    while(val)
    {
        cnt+=1;
        val/=2;
    }

    return cnt;
}

int32_t main()
{
    int n, m;
    cin>>n>>m;

    vector<int> v=input(m);

    int ttl=dgts_in(LLONG_MAX);
    
    int val=0;
    for(int i=1; i<pow(2, m); i++)
    {
        int x=1, j=0, p=i, cnt=0, flag=0; 
        while(p)
        {
            if(p%2)
            {
                int a=dgts_in(x);
                int b=dgts_in(v[j]);

                if((a+b)>ttl)
                {
                    flag=1;
                    break;
                }

                x*=v[j];
                cnt+=1;
            }
            
            j+=1;
            p/=2;
        }

        if(flag)
            continue;

        if(cnt%2)
            val+=n/x;
        else
            val-=n/x;
}

    cout<<val<<"\n";
    return 0;
}