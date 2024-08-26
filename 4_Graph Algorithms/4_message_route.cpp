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
  int n, m;
  cin>>n>>m;
  vector<vector<int>> g(n+1);
  for(int i=0; i<m; i++)
  {
    int u, v;
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<int> par(n+1, -1);
  queue<int> q;
  q.push(1);
  par[1]=0;

  while(!q.empty())
  {
    int x=q.front();
    q.pop();

    for(int i=0; i<g[x].size(); i++)
    {
      int y=g[x][i];
      if(par[y]==-1)
      {
        par[y]=x;
        q.push(y);
      }
    }
  }

  if(par[n]==-1)
    cout<<"IMPOSSIBLE\n";
  else
  {
    vector<int> ans;
    int x=n;
    while(par[x]!=-1)
    {
      ans.push_back(x);
      x=par[x];
    }

    reverse(ans.begin(), ans.end());
    
    cout<<ans.size()<<"\n";
    for(int i=0; i<ans.size(); i++)
      cout<<ans[i]<<" ";
    
    cout<<"\n";
  }
  return 0;
}