#include<bits/stdc++.h>
using namespace std;
void printset( multiset<string>s)
{
    for(auto v:s)
    {
        cout<<v<<endl;
    }
}



int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    multiset<string>s;   // O(log(n))
    s.insert("abc");
    s.insert("ac");
    s.insert("bc");
    s.insert("abc");
    printset(s);
 auto it=s.find("abc");
 if(it!=s.end())
 {
    //s.erase(it); // delete only one copy of abc
    //cout<<*it<<endl;
 }
s.erase("abc"); //delete all copy of abc
 printset(s);

 

   

}