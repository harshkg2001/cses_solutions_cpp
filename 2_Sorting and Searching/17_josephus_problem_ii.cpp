#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                           \
  ios_base::sync_with_stdio(false);      \
  cin.tie(NULL);                         \
  cout.tie(NULL)

int32_t main()
{
  fastio;
  int n, k;
  cin>>n>>k;
  map<int, int> m;
  for(int i=1; i<=n; i++)
    m[i]=i;

  vector<int> res;
  int start=0;

  while(m.size())
  {
    start+=k;
    start%=m.size();

    auto it=m.begin();
    advance(it, start);

    res.push_back(it->first);

    m.erase(it);
  }

  for(int i=0; i<res.size(); i++)
    cout<<res[i]<<" ";

  return 0;
}