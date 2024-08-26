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
  int n;
  cin>>n;
  vector<vector<int>> g(n+1);
  for(int i=0; i<n-1; i++)  
  {
    int u, v;
    cin>>u>>v;
    g[v].push_back(u);
  }

  return 0;
}