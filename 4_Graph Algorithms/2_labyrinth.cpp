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

  pair<int, int> start, end;
  vector<vector<char>> v(n, vector<char>(m));
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cin>>v[i][j];
      if(v[i][j]=='A')
        start={i, j};
      else 
      if(v[i][j]=='B')
        end={i, j};
    }
  }

  vector<vector<char>> path(n, vector<char>(m));

  vector<int> dx={0, 0, 1, -1};
  vector<int> dy={1, -1, 0, 0};
  vector<char> dir={'R', 'L', 'D', 'U'};

  queue<pair<int, int>> q;
  q.push(start);
  v[start.first][start.second]='#';
  while(!q.empty())
  {
    int x= q.front().first;
    int y = q.front().second;
    q.pop();

    for(int i=0; i<4; i++)
    {
      int x1=x+dx[i];
      int y1=y+dy[i];

      if(x1>=0 && x1<n && y1>=0 && y1<m && v[x1][y1]!='#')
      {
        q.push({x1, y1});
        path[x1][y1]=dir[i];

        v[x1][y1]='#';
      }
    }
  }

  if(v[end.first][end.second]=='#')
  {
    int x=end.first;
    int y=end.second;

    string ans="";
    while(x!=start.first || y!=start.second)
    {
      ans.push_back(path[x][y]);
      if(path[x][y]=='R')
        y--;
      else
      if(path[x][y]=='L')
        y++;
      else
      if(path[x][y]=='D')
        x--;
      else
      if(path[x][y]=='U')
        x++;
    }
    reverse(ans.begin(), ans.end());
    cout<<"YES\n";
    cout<<ans.size()<<"\n";
    cout<<ans<<"\n";
  }
  else
    cout<<"NO\n";
  return 0;
}