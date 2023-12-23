#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;

    vector<string> a = {"0", "1"};
    for(int i=2; i<=n; i++)
    {
        int x=a.size();
        for(int j=x-1; j>=0; j--)
            a.push_back(a[j]);

        for(int j=0; j<a.size(); j++)
        {
            if(j<x)
                a[j].push_back('0');
            else
                a[j].push_back('1');
        }
    }

    for(int i=0; i<a.size(); i++)
    {
        reverse(a[i].begin(), a[i].end());
        cout<<a[i]<<"\n";
    }
    return 0;
}