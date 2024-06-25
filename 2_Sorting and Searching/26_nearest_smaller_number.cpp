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

  stack<int> s;
  for(int i=0; i<n; i++)  
  {
    while(!s.empty() && v[s.top()]>=v[i])
      s.pop();

    if(s.empty())
      cout<<0<<" ";
    else
      cout<<s.top()+1<<" ";

    s.push(i);
  }
  return 0;
}