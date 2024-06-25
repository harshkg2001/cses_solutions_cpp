#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  for(int i=1; i<n; i++)
    v[i]+=v[i-1];

  for(int i=0; i<n; i++)
    v[i]=(v[i]%n+n)%n;

  map<int, int> m;
  m[0]=1;

  int cnt=0;
  for(int i=0; i<n; i++)
  {
    cnt+=m[v[i]];
    m[v[i]]+=1;
  }

  cout<<cnt<<"\n";
  return 0;
}