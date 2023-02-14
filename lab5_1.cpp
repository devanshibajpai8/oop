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
        cout<<"enter the real part:";
        cin>>real;
        cout<<"enter the imaginary part:";
        cin>>img;

    }
    void display()
    {
        cout<<"the complex no is:"<<real<<"+"<<img<<"i"<<"\n";

    }
    complex(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        cout<<"sum:"<<real<<"+"<<img<<"i";
    }
};
int main()
{
    complex c1;
    c1.display();
    complex c2;
    c2.display();
    complex(c1,c2);
}