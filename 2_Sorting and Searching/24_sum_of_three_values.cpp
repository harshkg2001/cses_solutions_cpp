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

  vector<pair<int, int>> a;
  for(int i=0; i<n; i++)
    a.push_back({v[i], i});

  sort(a.begin(), a.end());
  for(int i=0; i<n; i++)
  {
    int sum=a[i].first;
    int l=i+1, r=n-1;
    while(l<r)
    {
      if(sum+a[l].first+a[r].first==t)
      {
        cout<<a[i].second+1<<" "<<a[l].second+1<<" "<<a[r].second+1<<"\n";
        return 0;
      }
      else
      if(sum+a[l].first+a[r].first<t)
        l+=1;
      else
        r-=1;
    }
  }
  cout<<"IMPOSSIBLE"<<"\n";
  return 0;
}