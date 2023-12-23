#include<bits/stdc++.h>
using namespace std;
#define int long long

void print(vector<int> &v)
{
    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int32_t main()
{
    int n;
    cin>>n;

    int ttl=(n*(n+1))/2;
    if(ttl%2==1)
        cout<<"NO"<<"\n";
    else
    {
        cout<<"YES"<<"\n";
        vector<int> v1;
        vector<int> v2;
        int val1=ttl/2;
        int val2=ttl/2;

        int i=n;
        while(i)
        {
            if(val1-i>=0)
            {
                v1.push_back(i);
                val1-=i;
            }
            else
            {
                v2.push_back(i);
                val2-=i;
            }

            i-=1;
        }
        print(v1);
        print(v2);
    }
    return 0;
}