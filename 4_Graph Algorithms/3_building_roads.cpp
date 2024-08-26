#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                             \
    ios_base::sync_with_stdio(false);      \
    cin.tie(NULL);                         \
    cout.tie(NULL)

int find(int x, vector<int> &a)
{
  if(a[x]==x)
    return x;
  return a[x]=find(a[x], a);
}

int32_t main()
{
  fastio;
  int n, m;
  cin>>n>>m;
  vector<pair<int, int>> v(m);
  for(int i=0; i<m; i++)
    cin>>v[i].first>>v[i].second;

  vector<int> a(n+1);
  for(int i=1; i<=n; i++)
    a[i]=i;

  for(int i=0; i<m; i++)
  {
    int x=v[i].first, y=v[i].second;
    int p=find(x, a), q=find(y, a);
    
    if(p!=q)
      a[p]=q;
  }

  map<int, int> s;
  vector<int> par;
  for(int i=1; i<=n; i++)
  {
    a[i]=find(i, a);
    if(s.find(a[i])==s.end())
    {
      s[a[i]]=1;
      par.push_back(i);
    }
  }
  cout<<s.size()-1<<"\n";
  for(int i=1; i<par.size(); i++)
    cout<<par[0]<<" "<<par[i]<<"\n";
  
  return 0;
}