#include<bits/stdc++.h>
using namespace std;
bool cmp1(pair<string,int> a,pair<string,int> b)
{
    if(a.second==b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,i,j;
cin >> n;
vector<pair<string, int>>a(n);
for ( i = 0; i <n; i++)
{
    cin >> a[i].first >> a[i].second;
}
sort(a.begin(), a.end(),cmp1);

for (i = 0; i < n; i++)
{
    cout << a[i].first << " "<<a[i].second<<endl;
}
}