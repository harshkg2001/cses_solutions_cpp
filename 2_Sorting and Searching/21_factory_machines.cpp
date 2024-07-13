#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                             \
    ios_base::sync_with_stdio(false);      \
    cin.tie(NULL);                         \
    cout.tie(NULL)

int32_t main()
{
  fastio;
  int n, k;
  cin>>n>>k;

  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  int mn=*min_element(v.begin(), v.end());
  int l=0, r=mn*k;
  while(l<(r-1))
  {
    int mid=(l+r)/2, cnt=0;
    for(int i=0; i<n; i++)
      cnt+=mid/v[i];
      
    if(cnt>=k)
      r=mid;
    else
      l=mid;
  }

  cout<<r<<"\n";
  return 0;
}