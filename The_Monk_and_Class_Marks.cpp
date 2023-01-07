#include<bits/stdc++.h>
using namespace std;

void printM(map<string,int>m)
{
  for(auto v:m)
 {
    cout<<v.first<<" "<<v.second<<endl;
 }
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
map<int, multiset<string>> mark_name;
int n,i,m;
cin >> n;
for (i = 0; i < n;i++)
{
    string s;
    cin >> s >> m;
    mark_name[m].insert(s);

}

auto it = --mark_name.end();
while(true)
{
    for(auto v1:it->second)
    {
        cout << v1 << " " << it->first<< endl;
        
    }
    if(it==mark_name.begin())
    {
        break;
    }
    --it;
}

// for(auto v:mark_name)
// {
//     for(auto v1:v.second)
//     {
//         cout << v1 << " " << v.first;
//         cout << endl;
//     }
    
// }

}