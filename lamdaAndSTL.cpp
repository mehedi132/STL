#include<bits/stdc++.h>
using namespace std;

bool p(int x)
{
    return x > 0;
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,i,j;

vector<int>a={2,4,6};
cout << all_of(a.begin(), a.end(), [](int x)
               { return x % 2 == 0; }) // lamda function
     << endl;
cout << any_of(a.begin(), a.end(), p) << endl;
cout << none_of(a.begin(), a.end(), p) << endl;



}
