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

void print(vector<int> &v)
{
    int n=v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";

    cout<<"\n";
}

int32_t main()
{
    int n;
    cin>>n;
    vector<int> v(n+1, INT_MAX);

    v[n]=0;
    for(int i=n; i>0; i--)
    {
        if(v[i]!=INT_MAX)
        {
            int x=i;
            while(x)
            {
                int d=x%10;
                v[i-d]=min(v[i-d], v[i]+1);

                x/=10;
            }
        }
    }
    
    cout<<v[0]<<"\n";
    return 0;
}