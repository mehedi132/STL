#include<bits/stdc++.h>
using namespace std;int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,i,j;
cin >> n;
int a[n];
// for (i = 0; i < n;i++)
// {
//     cin >> a[i];
// }
// sort(a, a + n);

// for (i = 0; i < n;i++)
// {
//    cout<< a[i]<<" ";
// }
// cout << endl;

// int *p = lower_bound(a, a + n, 9);// return locaation of givrn value or next greater value
// if(p==a+n)
// {
//    cout << "Not Found";
//    return 0;
// }
// cout << *p << endl;

// int *p1 = upper_bound(a, a + n, 5);// return locaation of  next greater value
// cout << *p1 << endl;                //logn

vector<int> b(n);

// for (i = 0; i < n;i++)
// {
//     cin >> b[i];
// }
// sort(b.begin(), b.end());

// for (i = 0; i < n;i++)
// {
//    cout<< b[i]<<" ";
// }
// cout << endl;

// auto it = lower_bound(b.begin(), b.end(), 9);// return locaation of givrn value or next greater value
// if(it==b.end())
// {
//    cout << "Not Found";
//    return 0;
// }
// cout << *it << endl;

// auto it1 = upper_bound(b.begin(), b.end(), 5);// return locaation of  next greater value
// cout << *it1 << endl;                //logn

set<int> s;
int x;

for (i = 0; i < n;i++)
{
    cin >> x;
    s.insert(x);
}


for(auto v:s)
    {
        cout<<v<<endl;
    }
cout << endl;
auto it = s.lower_bound(5);
auto it1 = s.upper_bound(5);
cout << *it<<" "<<*it1;
}