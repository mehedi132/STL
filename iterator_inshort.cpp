#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

vector<int>v={111,2,3,4,5};

 for(auto it=v.begin();it!=v.end();it++) //auto keyword dynamicly determine the datatype
 {
    cout<<*it<<endl;
 }

 vector<pair<int,int>>vp={{101,2},{3,4},{5,6}};
 //vector<pair<int,int>>:: iterator itp;
 for(auto itp=vp.begin();itp!=vp.end();itp++)
 {
    cout<<(*itp).first<<" "<<(*itp).second<<endl;
    cout<<itp->first<<" "<<itp->second<<endl;
 } //these avobe code represent as usal declaration


 vector<int>v1={11,21,31,41,51};
 vector<int>:: iterator it1;
 for(int value:v1) // range based loop
 {
    cout<<value<<endl;
 }

 vector<pair<int,int>>vp1={{110,2},{3,4},{5,6}};
 vector<pair<int,int>>:: iterator itp1;
 for(auto vp2: vp1)
 {
    cout<<vp2.first<<" "<<vp2.second<<endl;
   
 } //these code represent short declaration

}
