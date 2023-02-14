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
    friend void operator +(complex &,complex &);
    friend void operator *(complex &,complex &);
   
};
 void operator +(complex &t11,complex &t22)
    {
        cout<<t11.real+t22.real<<"\n";
        cout<<t11.img+t22.img<<"\n"<<"\n";
        
    }
    void operator *(complex &t11,complex &t22)
    {
        cout<<t11.real*t22.real<<"\n";
        cout<<t11.img*t22.img;
    }
int main()
{
    complex t1,t2,t3,t4;
    t1.get(3,4);
    t2.get(5,7);
    t1+t2;
    t1*t2;
    

}