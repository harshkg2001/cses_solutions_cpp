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

  int ans=0;

  map<int, int> m;
  int i=0, j=0;
  while(j<n)
  {
    m[v[j]]+=1;
    j+=1;

    while(i<j && m.size()>k)
    {
      m[v[i]]-=1;
      if(m[v[i]]==0)
        m.erase(v[i]);

      i+=1;
    }

    ans+=j-i;
  }

  cout<<ans<<"\n";

  return 0;
}