#include<bits/stdc++.h>
using namespace std;
#define int long long

void hanoi(int n, int from, int to, int aux, vector<pair<int, int>> &v)
{
    if(n==1)
    {
        v.push_back({from, to});
        return;
    }

    hanoi(n-1, from, aux, to, v);
    v.push_back({from, to});
    hanoi(n-1, aux, to, from, v);
}

int32_t main()
{
    int n;
    cin>>n;

    vector<pair<int, int>> v;
    hanoi(n, 1, 3, 2, v);

    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";

    return 0;
}