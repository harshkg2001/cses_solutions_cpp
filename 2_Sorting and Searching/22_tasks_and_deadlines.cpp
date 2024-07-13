#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                             \
    ios_base::sync_with_stdio(false);      \
    cin.tie(NULL);                         \
    cout.tie(NULL)

static bool cmp(pair<int,int> a, pair<int,int> b)
{
  if(a.first<b.first)
    return true;
  
  if(a.first==b.first && a.second>b.second)
    return true;

  return false;
}

int32_t main()
{
  fastio;
  int n;
  cin>>n;
  vector<pair<int,int>> v(n);

  for(int i=0; i<n; i++)
    cin>>v[i].first>>v[i].second;

  sort(v.begin(), v.end(), cmp);
  int sum=0, ans=0;
  for(int i=0; i<n; i++)
  {
    sum+=v[i].first;
    ans+=v[i].second-sum;
  }
  
  cout<<ans<<"\n";
  return 0;
}