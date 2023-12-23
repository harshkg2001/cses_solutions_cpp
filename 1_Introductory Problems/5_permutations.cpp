#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;

    if(n==1)
        cout<<1<<"\n";
    else
    if(n<=3)
        cout<<"NO SOLUTION"<<"\n";
    else
    {
        vector<int> v;
        for(int i=2; i<=n; i+=2)
            v.push_back(i);
        
        for(int i=1; i<=n; i+=2)
            v.push_back(i);  

        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";  

        cout<<"\n";    
    }
    return 0;
}