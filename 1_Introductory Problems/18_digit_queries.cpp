#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int q;
    cin>>q;

    while(q--)
    {
        int n;
        cin>>n;

        int val=9, x=0;
        while(n>(x+1)*val)
        {
            n-=(x+1)*val;
            x+=1;
            val*=10;
        }

        int res=pow(10, x);
        int ex=n/(x+1)-1;
        res+=ex;

        if(n%(x+1)>0)
            res+=1;
        
        vector<int> ans;
        while(res)
        {
            ans.push_back(res%10);
            res/=10;
        }
        
        reverse(ans.begin(), ans.end());

        int idx=(n%(x+1)-1+x+1)%(x+1);
        cout<<ans[idx]<<"\n";
    }
    return 0;
}