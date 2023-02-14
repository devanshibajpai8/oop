#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    int summ;
    public:
    void data()
    {
        cout<<"enter the real part:";
        cin>>real;
        cout<<"enter the imaginary part:";
        cin>>img;

    }
    void display()
    {
        cout<<"the complex no is:"<<real<<"+"<<img<<"i";

    }
    void sum(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;

    }
    void sum(int re,complex c2)
    {
        cin>>re;
        summ=(re+c2.real);
        
        cout<<"the complex no. is:"<<summ<<"+"<<c2.img<<"i";
      
    }
    
};
    int main()
    {
        complex c1,c2,c3,c4;
        c1.data();
        c2.data();
        c1.display();
        cout<<"\n";
        c2.display();
        cout<<"\n";
        c3.sum(c1,c2);
        c3.display();
        cout<<"\n";
        int r;
        cout<<"enter the vale of real part:";
        c4.sum(r,c2);
        
    }