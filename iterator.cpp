#include<bits/stdc++.h>
using namespace std;
int main()
{

    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 vector<int>v={1,2,3,4,5};
 vector<int>:: iterator it;
 for(it=v.begin();it!=v.end();it++)
 {
    cout<<*it<<endl;
 }

 vector<pair<int,int>>vp={{1,2},{3,4},{5,6}};
 vector<pair<int,int>>:: iterator itp;
 for(itp=vp.begin();itp!=vp.end();itp++)
 {
    cout<<(*itp).first<<" "<<(*itp).second<<endl;
    cout<<itp->first<<" "<<itp->second<<endl;
 }
} //(*itp).first== itp->first
//it++ !=it+1