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
map<pair<int, int>, int> mp;
pair<int, int> p1, p2;
p1 = {4, 3};
p2 = {3, 4};
cout << (p1 < p2) << endl; // if true print 1;

map<pair<string, string>, vector<int>> m;
int i, j, n, ct, x;
cin >> n;
for (i = 0; i < n;i++)
{
    string a, b;
    cin >> a >> b >> ct;
    for (j = 0; j < ct;j++)
    {
        cin >> x;
        m[{a, b}].push_back(x);
    }
}
// map<pair<string, string>, vector<int>> m1;
// pair<string, string>p;
// vector<int> v;
// p = {"a", "b"};
// v.push_back(10);
// v.push_back(20);
// m1.insert({p, v});


for(auto pr:m)
{
auto fullname = pr.first;
auto num = pr.second;
cout << fullname.first << " " << fullname.second << endl;
cout << num.size() << endl;
for(auto a:num)
{
        cout << a << " ";
}
cout << endl;
}


}
