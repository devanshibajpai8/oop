#include<iostream>
using namespace std;
//int swap(int,int);
int swap(int p,int q)
{
    int c;
    c=p;
    p=q;
    q=c;
    cout<<p<<q;
}
int main()
{
   int x,y;
   cout<<"enter the values:";
   cin>>x>>y;
   swap(x,y);
    return 0;
}