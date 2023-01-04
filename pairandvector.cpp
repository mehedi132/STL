#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;
   /// p=make_pair(1,"abc");
    p={2,"abc"};
    pair<int,string>&p1=p;
    p1.first=4;
    cout<<p.first<<" "<<p.second<<endl;
    // cout<<p1.first<<" "<<p1.second;
    pair<int,int>p_array[3];
    p_array[0]={1,2}; 
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;i++)
    {

        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
for(int i=0;i<3;i++)
    {

        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }

    
    

    return 0;
}