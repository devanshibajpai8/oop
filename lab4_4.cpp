#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
    void get(int r,int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
    friend complex sum(complex c11,complex c22)
    {
        complex t;
        t.real=c11.real+c22.real;
        t.imag=c11.imag+c22.imag;
        return (t);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.get(5,6);
    c2.get(2,3);
    c3=sum(c1,c2);
    c3.display();
}
