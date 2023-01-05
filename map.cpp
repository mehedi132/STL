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

map<string,int>m;
int n,i;
cin>>n;
string s;
for(i=0;i<n;i++)
{
  cin>>s;
  m[s]=m[s]+1;
}
printM(m);




//  map<int,string>m;
//  m[2]="abc";
//  m[5]="mehedi"; // O(log(n)) use red black tree comparison to insert
//  m.insert({1,"aaa"});
//  m.insert({3,"abb"});
//  m[2]="bc";
 
 //m["abc"]="abc" // string.size* log(n)
//  auto it=m.find(5); // find()return an iterator
//  m.erase(2); //key or iterator





//  if(it==m.end())
// {
//   cout<<"No Value"<<endl;
// }
// else{
//   cout<<it->first<<" "<<(*it).second<<endl;
// }
//printM(m);


}
