#include<iostream>
using namespace std;
class xyz
{
    int a;
    public:
    void get(int i)
    {
        a=i;
    }
    void display()
    {
        cout<<a;
    }
    void f1(xyz &x22)
    {
        int t;
        t=a;
        a=x22.a;
        x22.a=t;
    }
      void f2(xyz *x33)
    {
        int t;
        t=a;
        a=(*x33).a;
        (*x33).a=t;
    }

    };
    int main()
    {
        xyz x1,x2,x3;
        x1.get(20);
        x2.get(40);
        x3.get(50);
        x1.f1(x2);
        x3.f2(&x2);
        x1.display();
        cout<<"\n";
        x2.display();
        cout<<"\n";
        x3.display();
    }

