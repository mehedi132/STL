#include<bits/stdc++.h>
using namespace std;
void printset(set<string>s)
{
    for(auto v:s)
    {
        cout<<v<<endl;
    }
}

void printuset(unordered_set<string>s)
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

    //set<string>s;  // O(log(n))
//     s.insert("abc");
//     s.insert("ac");
//     s.insert("bc");
//  auto it=s.find("apc");
//  if(it!=s.end())
//  {
//     cout<<*it<<endl;
//  }
//  s.erase("ac");
unordered_set<string>s; // O(1) if order wont matter use unorderes set
 int n;
 cin>>n;
 string b;
 for(int i =0;i<n;i++)
 {
    cin>>b;
    s.insert(b);
    
 }
  printuset(s);
 int q;
 cin>>q;
 while(q--)
{
    cin>>b;
    if(s.find(b)==s.end())
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

   

}