#include<bits/stdc++.h>
using namespace std;

void printM(unordered_map<string,int>m)
{
  for(auto v:m)
 {
    cout<<v.first<<" "<<v.second<<endl;
 }
}

void printb(map<int,vector<string>>m)
{
  for(auto v:m)
 {
    for(auto v1:v.second)
    {
        cout<<v.first<<" "<<v1<<endl;
    }
    // cout<<v.first<<" "<<v.second[0]<<endl;
    // cout<<v.first<<" "<<v.second[1]<<endl;
 }
}


int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

unordered_map<string,int>m; //O(1) use hash table.low complexcity than map
int n,i;
cin>>n;
string s;
for(i=0;i<n;i++)
{
  cin>>s;
  m[s]=m[s]+1;
}
int q;
cin>>q;
while(q--)
{
    cin>>s;
    //cout<<s<<" "<<m[s]<<endl;
}
//printM(m);
//multimap<int,int>n;//multimap can store duplicate key
map<int,vector<string>>b;
vector<string> t,z;
t.push_back("mehedi");
t.push_back("ME");
z.push_back("hasan");
z.push_back("moly");

b[1]=t;
//b[132]=z;
b.insert({132,t});
b[132]=z;
printb(b);
//cout<<b[1]<<endl;




// unordered_map<int,string>m;
//   m[2]="abc";
//   m[5]="mehedi"; // O(1)
//   m.insert({1,"aaa"});
//   m.insert({3,"abb"});
//  m[2]="bc";
 
 //m["abc"]="abc" // string.size* O(1)
//  auto it=m.find(5); // find()return an iterator O(1)
//  m.erase(2); //key or iterator O(1)





//  if(it==m.end())
// {
//   cout<<"No Value"<<endl;
// }
// else{
//   cout<<it->first<<" "<<(*it).second<<endl;
// }
//printM(m);


}