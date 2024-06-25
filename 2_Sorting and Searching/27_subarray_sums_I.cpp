#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
  int n, x;
  cin>>n>>x;
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin>>v[i];

  int i=0, j=0, sum=0, cnt=0;
  while(j<n)
  {
    
    sum+=v[j];
    j+=1;
    
    while(sum>=x && i<j)
    {
      if(sum==x)
        cnt+=1;

      sum-=v[i];
      i+=1;
    }
  }
  cout<<cnt<<"\n";
  return 0;
}