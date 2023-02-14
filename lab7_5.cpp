#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void get(int x,int y)
    {
        real=x;
        img=y;
    }
    void display()
    {
        cout<<real<<"\n"<<img<<"\n";
    }
    complex operator +(complex t11)
    {
        complex t;
        t.real=real+t11.real;
        t.img=img+t11.img;
        return t;
    }
    complex operator *(complex t11)
    {
        complex t;
        t.real=real*t11.real;
        t.img=img*t11.img;
        return t;
    }
};
int main()
{
    complex t1,t2,t3,t4;
    t1.get(3,4);
    t2.get(5,7);
    t3=t1+t2;
    t4=t1*t2;
    cout<<"addition:";
    t3.display();
    cout<<"multiplication:";
    t4.display();

}