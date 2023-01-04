#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int>&v)
{
     cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(80);
    cout<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    
    
     vector<int>v;
    int n;;
    //cin>>n;
    

    for(int i=0;i<n;i++)
    {
        int x;
       
       // cin>>x;

        //printVector(v);
        v.push_back(x);
    }
   vector<int>v1(10,8);
   v1.push_back(14);
   printVector(v1);
   vector<int>a;
   a.push_back(5);
   a.push_back(6);
   printVector(a);
   printVector(a);
    

    return 0;
}