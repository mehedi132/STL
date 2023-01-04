#include<bits/stdc++.h>
using namespace std;

void printpair(vector<pair<int, int>>v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;


    }
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

vector<pair<int, int>>v  ;//={{1,2},{3,4},{5,6}};
int n,x,y;
cin>>n;
for(int i=0;i<n;i++)
    {
        cin>>x>>y;
       v.push_back({x,y}) ; // v.push_back(make_pair(x,y))
    }

printpair(v);

}