#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                             \
    ios_base::sync_with_stdio(false);      \
    cin.tie(NULL);                         \
    cout.tie(NULL)

int find(vector<vector<int>> &g, int x, vector<int> &d)
{
  if(g[x].size()==0)
    return d[x]=0;

  if(d[x]>=0)
    return d[x];

  int val=0;
  for(int i=0; i<g[x].size(); i++)
    val+=1+find(g, g[x][i], d);

  return d[x]=val;
}

int32_t main()
{
  fastio;
  int n;
  cin>>n;
  vector<vector<int>> g(n+1);
  for(int i=2; i<=n; i++)
  {
    int x;
    cin>>x;
    g[x].push_back(i);
  }
  vector<int> d(n+1, -1);
  int val = find(g, 1, d);

  for(int i=1; i<=n; i++)
    cout<<d[i]<<" ";  

  return 0;
}