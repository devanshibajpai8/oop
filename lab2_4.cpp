#include<iostream>
using namespace std;
float fun_area(float r)
{
    return(3.14*r*r);
}
float fun_area(float l,float b)
{
    return(l*b);
}
float fun_area(float x,float y,float z)
{
    return(x*y*z);
}
string fun_area()
{
    return("no argument entered.");
}
int main()
{
    float p,q,r,s;
    cout<<"enter radius:";
    cin>>p;
    cout<<"enter l and b:";
    cin>>q>>r;
    cout<<"enter width:";
    cin>>s;
    cout<<"1 argument:"<<fun_area(p)<<"\n2 argument:"<<fun_area(q,r)<<"\n3 argument:"<<fun_area(s,s,s)<<"\nno argument:"<<fun_area();
    return 0;
}
