#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    int summ;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(int r)
    {
        real=r;
        img=r;
    }
    complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<"the complex no is:"<<real<<"+"<<img<<"i"<<"\n";
    }
    void sum(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
};
int main()
{
    complex c1;
    int real,img;
    cout<<"enter the real and imaginary value:";
    cin>>real>>img;
    complex c2(real);
    c2.display();
    complex c3(real,img);
    c3.display();
    c1.sum(c2,c3);
    c1.display();


}
