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
  string s;
  cin>>s;

  int n=s.size();
  map<char, int> m;

  string ans="";
  for(int i=0; i<n; i++)
  {
    m[s[i]]++;
    if(m.size()==4)
    {
      ans.push_back(s[i]);
      m.clear();
    }
  }

  if(m.find('A')==m.end())
    ans.push_back('A');
  else 
  if(m.find('C')==m.end())
    ans.push_back('C');
  else
  if(m.find('G')==m.end())
    ans.push_back('G');
  else
  if(m.find('T')==m.end())
    ans.push_back('T');

  cout<<ans<<"\n";
  return 0;
}