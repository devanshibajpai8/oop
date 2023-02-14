#include<iostream>
using namespace std;
int sum(int x,int y=10,int z=20)
{
    return(x+y+z);
}
int main()
{
    int a,b,c;
    cout<<"enter the values:";
    cin>>a>>b>>c;

    cout<<"\nvalue with 1 argument:"<<sum(a)<<"\nvalue with 2 argument"<<sum(a,b)<<"\nvalue with 3 argument:"<<sum(a,b,c);
return 0;
}
