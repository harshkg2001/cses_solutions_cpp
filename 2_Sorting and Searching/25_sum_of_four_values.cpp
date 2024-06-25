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

  map<int, vector<int>> m;
  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      int sum=v[i]+v[j];
      m[sum].push_back(i);
      m[sum].push_back(j);
    }
  }

  for(int i=0; i<n; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      int sum=v[i]+v[j], val=t-sum;
      if(m.find(val)!=m.end())
      {
        for(int k=0; k<m[val].size(); k+=2)
        {
          int a=m[val][k], b=m[val][k+1];
          if(a!=i && a!=j && b!=i && b!=j)
          {
            cout<<a+1<<" "<<b+1<<" "<<i+1<<" "<<j+1<<"\n";
            return 0;
          }
        }
      }
    }
  }
  cout<<"IMPOSSIBLE"<<"\n";
  return 0;
}