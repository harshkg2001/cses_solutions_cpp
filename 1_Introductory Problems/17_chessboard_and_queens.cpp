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
  vector<vector<char>> v(8, vector<char>(8));
  for(int i=0; i<8; i++)
  {
    for(int j=0; j<8; j++)
      cin>>v[i][j];
  }
  vector<vector<int>> safe(8, vector<int>(8, 0));

  int ans=0;
  return 0;
}