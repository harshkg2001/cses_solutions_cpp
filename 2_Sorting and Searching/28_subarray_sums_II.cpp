#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
  int n, t;
  cin>>n>>t;
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  int cnt=0;
  int sum=0;
  map<int, int> m;
  m[0]=1;
  for(int i=0; i<n; i++)
  {
    sum+=v[i];
    cnt+=m[sum-t];
    m[sum]+=1;
  }

  cout<<cnt<<"\n";
  return 0;
}