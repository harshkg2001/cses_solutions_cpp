#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    int n;
    cin>>n;
    while(true)
    {
        cout<<n<<" ";
 
        if(n==1)
            break;
 
        if(n%2==1)
            n=n*3+1;
        else
            n/=2;
    }
    cout<<"\n";
    return 0;
}