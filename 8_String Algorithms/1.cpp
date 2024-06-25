#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
  string s;
  cin>>s;

  int n, mod=1e9+7;
  cin>>n;
  vector<string> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  map<string, int> m;
  for(int i=0; i<n; i++)
    m[v[i]]=1;

  int x=s.size();
  vector<int> ans(x+1, 0);

  ans[0]=1;
  for(int i=0; i<=x; i++)
  {
    string st="";
    if(ans[i]!=0)
    {
      for(int j=i+1; j<=x; j++)
      {
        st.push_back(s[j-1]);
        if(m.find(st)!=m.end())
          ans[j]=(ans[i]+ans[j])%mod;
      }
    }
  }

  cout<<ans[x]<<"\n";
  return 0;
}