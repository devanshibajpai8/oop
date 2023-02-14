#include<iostream>
using namespace std;
class two;
class one
{
    public:
    int i;
    void get()
    {
        cout<<"1st no.";
        cin>>i;
    }
    friend int f1(one a11,two a22);
};
class two
{
    int j;
    public:
    void get()
    {
        cout<<"2nd no.";
        cin>>j;
    }
    friend int f1(one a11,two a22);
};
int f1(one a11,two a22)
{
    int large;
    if(a11.i < a22.j)
    {
        large=a22.j;
    }
    else 
    {
    large=a11.i;
    }
    cout<<large;
}
int main()
{
    one i;
    two j;
    i.get();
    j.get();
    f1(i,j);
}