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
  vector<vector<char>> v(n, vector<char>(m));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
      cin>>v[i][j];
  }

  vector<int> dx={0, 0, 1, -1};
  vector<int> dy={1, -1, 0, 0};

  int cnt=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(v[i][j]=='.')
      {
        cnt++;
        queue<pair<int, int>> q;
        q.push({i, j});
        v[i][j]='#';
        while(!q.empty())
        {
          int x=q.front().first;
          int y=q.front().second;
          q.pop();
          for(int k=0; k<4; k++)
          {
            int x1=x+dx[k];
            int y1=y+dy[k];
            if(x1>=0 && x1<n && y1>=0 && y1<m && v[x1][y1]=='.')
            {
              q.push({x1, y1});
              v[x1][y1]='#';
            }
          }
        }
      }
    }
  }
  cout<<cnt<<"\n";
  return 0;
}