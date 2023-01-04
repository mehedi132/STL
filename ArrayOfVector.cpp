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

    int N;
    cin>>N;
    int n;
    int x;
    vector<int>v[N];
    for(int i=0;i<N;i++)
    {
         cin>>n;
         for(int j=0;j<n;j++)
         {
            cin>>x;
            v[i].push_back(x);

         }
    }
    for(int i=0;i<N;i++)
    {
    
    printV(v[i]);

    }
    
}