#include<bits/stdc++.h>
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
while (!s.empty())
{
    cout << s.top() << endl;
    s.pop();
}
queue<string> q;
q.push("abc");
q.push("bc");
q.push("ac");
q.push("ab");
q.push("abcd");

while (!q.empty())
{
    cout<<q.front() << endl;
    q.pop();
}


}