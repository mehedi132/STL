#include<bits/stdc++.h>
using namespace std;



int main()
{
    
int t;
cin>>t;
while(t--)
{ int n,k,i;
long long candy,totalcandy=0;
multiset<long long>s;
cin>>n>>k;
for(i=0;i<n;i++)
{
    cin>>candy;
    s.insert(candy);
}
for(i=0;i<k;i++)
{
    auto it=(--s.end());
    totalcandy+=*it;
   // cout<<totalcandy<<endl;
    s.erase(it);
    s.insert(*it/2);

}cout<<totalcandy;
cout<<endl;





     

}

   
    
    
 

   

}