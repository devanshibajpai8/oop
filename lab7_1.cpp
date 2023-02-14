#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator -()
    {
        a=-a;
        b=-b;
    }
    void display()
    {
        cout<<a<<"\n"<<b;
    }
    
};
int main()
{
    A a1;
    a1.get(5,7);
    -a1;
    a1.display();
}