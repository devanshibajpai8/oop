#include<iostream>
using namespace std;
class vector
{
    int a,b,c;
    public:
    void create_vector()
    {
        cout<<"enter the scalar quantity for x:";
        cin>>a;
        cout<<"enter the scalar quantity for y:";
        cin>>b;
        cout<<"enter the scalar quantity for z:";
        cin>>c;
        display();
    }
    void display()
    {
        cout<<"The vector is:"<<a<<"i+"<<b<<"j+"<<c<<"k"<<"\n";
    }
    void modify()
    {
       int e;
       cout<<"\n"<<"enter the value in which ever direction you want to modify:"<<"\n"<<"1)x-direction"<<"\n"<<"2)y-direction"<<"\n"<<"3)z-direction"<<"\n";
       cout<<"enter the choice:";
       cin>>e;
       if(e==1)
       {
           cout<<"enter new x:";
           cin>>a;
       }
       else if(e==2)
       {
           cout<<"enter new y:";
           cin>>b;
       }
       else
       {
           cout<<"enter new z:";
           cin>>c;
       }
       display();
    }
    void multiply()
    {
        int q;
        cout<<"enter the value to be multiplied:";
        cin>>q;
        a=a*q;
        b=b*q;
        c=c*q;
        display();
    }
    void display1()
    {
        cout<<"("<<a<<","<<b<<","<<c<<")";
    }
};
int main()
{
    vector v;
    v.create_vector();
    v.modify();
    v.multiply();
    v.display1();
}