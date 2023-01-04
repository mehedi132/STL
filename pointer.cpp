#include<bits/stdc++.h>
using namespace std;
void inc(int *x)
{
    *x=*x+1;
}

int main()
{
    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif   /*this block of code is used 
for read output and input in a file in vscode.
*/ 
    int x=85;
    int *p;
    p=&x;
    cout<<&x<<endl;
    cout<<p<<endl; //print the address of x
    cout<<"value att x is:"<<*p<<endl; //print the value of x
                    // * mean value at 
    *p=10;
    cout<<"value att x is:"<<x<<endl;                
    //p=p+1; // addind 1 block of data type.
           // here it is int type. so add 4 in address
    //cout<<p;
    int **pp;//pointer of a pointer
    pp=&p;
    cout<<&p<<endl;
    cout<<pp<<endl;
    cout<<*pp<<endl; //address of x
     cout<<**pp<<endl;// value of x
     **pp=40;
     cout<<x<<endl;
     int a[5];
     a[0]=2;
     a[1]=5;
     cout<<"addr of a:"<<a<<endl;
     cout<<"addr of a:"<<&a[0]<<endl;
     cout<<*a<<endl;
     cout<<"addr of a1:"<<&a[1]<<endl;
     cout<<"addr of a1:"<<a+1<<endl;
     cout<<*(a+1)<<endl;

     inc(&x);
     cout<<x;




}