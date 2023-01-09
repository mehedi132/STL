#include<bits/stdc++.h>
using namespace std;

bool should_i_swap(int a, int b)
{
    if(a>b)
        return true;
    return false;
}
bool cmp(int a, int b)
{
    return a > b;
}

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
int a[n];
for ( i = 0; i <n; i++)
{
    cin >> a[i];
}
sort(a+1, a + 4); // start point, end point+1 nlogn

for (i = 0; i < n;i++)
{
    for (j = i + 1; j < n;j++)
    {
        if(should_i_swap(a[i],a[j])) // if(a[i]>a[j]) assending sort
        {
            swap(a[i], a[j]);
        }
    }
}

sort(a, a + n, cmp);

for (i = 0; i < n; i++)
{
    cout << a[i] << " ";
    }

// vector<pair<string, int>>a(n);
// for ( i = 0; i <n; i++)
// {
//     cin >> a[i].first >> a[i].second;
// }
// sort(a.begin(), a.end(),cmp1);

// for (i = 0; i < n; i++)
// {
//     cout << a[i].first << " "<<a[i].second<<endl;
// }
}