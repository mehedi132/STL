#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>v)
{
    cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";


    }
    cout<<endl;
}

int main()
{
     #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    vector<vector<int>>v;
    
    int N;
    cin>>N;

    int n,x;
    for(int i=0;i<N;i++)
    {   vector<int>temp;
        cin>>n;
        for(int j=0;j<n;j++)
        {
         cin>>x;
        temp.push_back(x);
        }
       
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
    
    printV(v[i]);

    }
}
