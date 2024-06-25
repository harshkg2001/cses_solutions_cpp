#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
  int n, k;
  cin>>n>>k;
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  int sum=accumulate(v.begin(), v.end(), (int)0);
  int l=*max_element(v.begin(), v.end())-1, r=sum;
  while(l<(r-1))
  {
    int mid=(l+r)/2;
    int cnt=1, val=0;
    for(int i=0; i<n; i++)
    {
      if(val+v[i]<=mid)
        val+=v[i];
      else
      {
        cnt+=1;
        val=v[i];
      }
    }

    if(cnt<=k)
      r=mid;
    else
      l=mid;
  }

  cout<<r<<"\n";
  return 0;
}