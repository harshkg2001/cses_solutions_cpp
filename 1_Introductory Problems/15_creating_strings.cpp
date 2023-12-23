#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(string &s, string &str, set<string> &st)
{
    if(s.size()==0)
        st.insert(str);

    for(int i=0; i<s.size(); i++)
    {
        str.push_back(s[i]);
        s.erase(s.begin()+i);
        solve(s, str, st);
        s.insert(s.begin()+i, 1, str[str.size()-1]);
        str.pop_back();
    }

}

int32_t main()
{
    string s, str="";
    cin>>s;

    set<string> st;
    solve(s, str, st);

    cout<<st.size()<<"\n";
    for(auto it=st.begin(); it!=st.end(); it++)
        cout<<*it<<"\n";

    return 0;
}