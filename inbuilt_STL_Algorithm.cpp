#include<bits/stdc++.h>
using namespace std;int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,i,j;
cin >> n;
vector<int>a(n);
for (i = 0; i < n;i++)
{
    cin >> a[i];
}



for (i = 0; i < n;i++)
{
   cout<< a[i]<<" ";
}
cout << endl;

int min = *min_element(a.begin(), a.end());//min_element return the memory address of min element of the given raange
cout << min << endl;
int max = *max_element(a.begin(), a.end());
cout << max << endl;
int sum=accumulate(a.begin(), a.end(),0);
cout << sum << endl;
int c = count(a.begin(), a.end(), 5);
cout << c << endl;
reverse(a.begin(), a.end());

for (i = 0; i < n;i++)
{
   cout<< a[i]<<" ";
}
cout << endl;
}