#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define fastio                             \
    ios_base::sync_with_stdio(false);      \
    cin.tie(NULL);                         \
    cout.tie(NULL)

void displayTheChannels(int n, vector<string> &ch, vector<int> &op)
{
  int idx=0;
  for(int i=0; i<op.size(); i++)
  {
    if(op[i]==1)
      idx+=1;
    else
    if(op[i]==2)
      idx-=1;
    else
    if(op[i]==3)
    {
      swap(ch[idx], ch[idx+1]);
      idx+=1;
    }
    else
    {
      swap(ch[idx], ch[idx-1]);
      idx-=1;
    }
  }

  for(int i=0; i<n; i++)
    cout<<ch[i]<<"\n";
}

int getMin(string s)
{
  int n=s.size();
  stack<char> st;

  for(int i=0; i<n; i++)
  {
    if(s[i]=='(')
      st.push('(');
    else 
    if(s[i]==')')
    {
      if(st.empty() || st.top()!='(')
        st.push(')');
      else
        st.pop();
    }
  }

  return st.size();
}

int32_t main()
{
  fastio;


  return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define mod 1000000007
// #define fastio                             \
//     ios_base::sync_with_stdio(false);      \
//     cin.tie(NULL);                         \
//     cout.tie(NULL)

// int32_t main()
// {
//   fastio;
//   int n;
//   cin>>n;
//   vector<int> vi(n+1);
//   vector<vector<int>> g(n+1);
//   for(int i=0; i<n-1; i++)  
//   {
//     int a, b;
//     cin>>a>>b;
//     g[a].push_back(b);
//     g[b].push_back(a);
//   }
  
//   queue<int> q;
//   for(int i=1; i<=n; i++)
//   {
//     if(g[i].size()==1)
//       q.push(i);
//   }

//   int cnt=0;
//   while(!q.empty())
//   {
//     int x=q.front();
//     q.pop();

//     int y=g[x][0];
//     vi[x]=1;
//     vi[y]=1;

//     for(int i=1; i<g[x].size(); i++)
//     {
//       if(!vi[g[x][i]])
//         q.push(g[x][i]);
//     }
//     for(int i=0; i<g[y].size(); i++)
//     {
//       if(!vi[g[y][i]])
//         q.push(g[y][i]);
//     }
//   }

//   cout<<cnt<<"\n";
//   return 0;
// }