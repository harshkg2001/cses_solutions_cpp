#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s;
    cin>>s;

    int n=s.size();
    vector<int> v(26);
    for(int i=0; i<n; i++)
        v[s[i]-'A']+=1;

    int cnt=0;
    for(int i=0; i<v.size(); i++)
        cnt+=v[i]%2;

    if(cnt>1)
        cout<<"NO SOLUTION"<<"\n";
    else
    {
        string s1="";
        char ch='a';
        for(int i=0; i<26; i++)
        {
            if(v[i]%2)
                ch=char(i+'A');

            for(int j=0; j<v[i]/2; j++)
                s1.push_back(char(i+'A'));
        }
        string s2=s1;
        reverse(s2.begin(), s2.end());
        if(ch!='a')
            s1.push_back(ch);

        s1+=s2;
        cout<<s1<<"\n";
    }
    return 0;
}