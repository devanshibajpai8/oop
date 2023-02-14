#include<iostream>
using namespace std;
class comp
{
    int real,img;
    public:
    void get(int r,int i)
    {
        real=r;
        img=i;

    }
    void display()
    {
        cout<<real<<"+"<<img<<"i";

    }
    void sum(comp c11,comp c22)
    {
        real=c11.real+c22.real;
        img=c11.img+c22.img;

    }
};
int main()
{
    comp c1,c2,c3;
    c1.get(7,4);
    c2.get(8,6);
    c3.sum(c1,c2);
    c3.display();
}

