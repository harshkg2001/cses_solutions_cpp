#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s;
    cin>>s;

    int cnt=1, mx=1;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
            cnt+=1;
        else
        {
            mx=max(mx, cnt);
            cnt=1;
        }
        mx=max(mx, cnt);
    }

    cout<<mx<<"\n";
    return 0;
}