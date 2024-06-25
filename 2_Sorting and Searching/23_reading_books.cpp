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

  sort(v.begin(), v.end());
  int sum=accumulate(v.begin(), v.end(), (int)0);

  int val=v[n-1];
  if(val>(sum-val))
    cout<<2*val<<"\n";
  else
    cout<<sum<<"\n";

  return 0;
}