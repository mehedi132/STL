#include<bits/stdc++.h>
using namespace std;
unordered_map<char, int> st = {{'{', -1},
                     {'[', -2},
                     {'(', -3},
                     {'}', 1},
                     {']', 2},
                     {')', 3}};

string isBalanced(string s) {
    stack<char> sb;
     for(char b:s)
    {
        if(st[b]<0)
        {
            sb.push(b);
        }
        else{
            if(sb.empty()==1)
            {
                return "NO";
               
                
            }
            else
            {
                auto Top = sb.top();
                sb.pop();
                if((st[Top]+st[b])!=0)
                {
                    return "NO";
                }
            }
            
        }
    }  
    if(sb.empty())
    {
        return "YES";
    }


}

int main()
{
//     #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
int t;
cin >> t;
while(t)
{
    string s;
    cin >> s;
    auto r=isBalanced(s);
    cout << r << endl;

    t--;
}

// map<char, int> st = {{'{', -1},
//                      {'[', -2},
//                      {'(', -3},
//                      {'}', 1},
//                      {']', 2},
//                      {')', 3}};
// int t,a=0;
// string s;
// stack<char> sa;
// cin >> t;
// while (t)
// {
//     a = 0;
//     cin >> s;
//     stack<char> sa;
//     for(char b:s)
//     {
//         if(st[b]<0)
//         {
//             sa.push(b);
//         }
//         else{
//             if(sa.empty()==1)
//             {
//                  cout << "NO";
//                 a++;
                
//             }
//             else
//             {
//                 auto Top = sa.top();
//                 sa.pop();
//                 if((st[Top]+st[b])!=0)
//                 {
//                     cout << "NO"<<endl;
//                     a++;
//                     break;
//                                 }
//             }
            
//         }
//     }
//     if(sa.empty() && a==0)
//     {
//         cout << "YES" << endl;
//     }else{
//         cout << "NO" << endl;
//     }
    

//     t--;
// }




}