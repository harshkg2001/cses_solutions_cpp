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
    int a, b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> vis(n+1, 0);
  vector<int> col(n+1, 0);

  for(int i=1; i<=n; i++)
  {
    if(!vis[i])
    {
      vis[i]=1;
      col[i]=1;
      queue<int> q;
      q.push(i);

      while(!q.empty())
      {
        int x=q.front();
        q.pop();

        for(int i=0; i<g[x].size(); i++)  
        {
          int y=g[x][i];
          if(!vis[y])
          {
            vis[y]=1;
            col[y]=1-col[x];
            q.push(y);
          }
          else if(col[y]==col[x])
          {
            cout<<"IMPOSSIBLE\n";
            return 0;
          }
        }
      }
    }
  }

  for(int i=1; i<=n; i++)
  {
    if(col[i]==0)
      col[i]=2;

    cout<<col[i]<<" ";
  }

  return 0;
}