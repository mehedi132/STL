#include<bits/stdc++.h>
using namespace std;



int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n,i,a;
cin >> n;


vector<int> v;
for (i = 0; i < n;i++)
{
    cin >> a;
    v.push_back(a);
   // mm.insert({a, 0});
}
vector<int> neg(v.size());

stack<int> s;

// for (i = 0; i < n;i++)
// {
    
    
//     if(s.empty())
//     {
//         s.push( v[i]);
//     }
//     else{

//      while( !s.empty() && v[i]>s.top())
//     {
//         cout << s.top() << "->" << v[i] << endl;
//         s.pop();
//     }
//     if(s.empty()|| v[i]<=s.top())
//     {
//         s.push( v[i]);
//        // cout << s.top() << endl;
//     }
//     }
   
// }

// mm[1] = 2;
 //mm[1] = 5;

for (i = 0; i < v.size(); i++)
{ 
    
    

     while(!s.empty()&&v[i]>v[s.top()])
    {
        neg[s.top()] = i;

        s.pop();
    }
    if(s.empty()||v[i]<=v[s.top()])
    {
        s.push(i);

    }
    
    
}
// cout << s.top();
while(!s.empty())
{
    neg[s.top()] = -1;
          
    s.pop();
}
for (i = 0; i < v.size(); i++)
{
    cout << v[i] << " " << (neg[i] == -1 ? -1 : v[neg[i]]) << endl;
    ;
}




// for(auto b:v)
// { 
    
//     if(s.empty())
//     {
//         s.push(b);
//     }
//     else{

//      while(!s.empty()&&b>s.top())
//     {
//         cout << s.top() << " " << b<< endl;
        
//         s.pop();
//     }
//     if(s.empty()||b<=s.top())
//     {
//         s.push(b);

//     }
//     }
    
// }
// // cout << s.top();
// while(!s.empty())
// {
//     cout << s.top() << " " << "-1" << endl;
          
//     s.pop();
// }

//printM(mm);
}