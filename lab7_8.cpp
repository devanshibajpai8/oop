#include<iostream>
using namespace std;
class A
{
    int i,j;
    public:
    void get(int x,int y)
    {
        i=x;
        j=y;
    }
    void display()
    {
        cout<<i<<"\n"<<j<<"\n";
    }
    void operator +(int k)
    {
        i=i+10+k;
        j=j+10+k;
    }
    friend void operator +(int l,A &a11)
    {
        a11.i=10+l+a11.i;
        a11.j=10+l+a11.j;
    }
};
int main()
{
    A a1,a;
    a1.get(5,6);
    a1+5;
    a1.display();
    a.get(2,3);
    10+a;
    a.display();
}