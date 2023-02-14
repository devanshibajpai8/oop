#include<iostream>
using namespace std;
class teacher
{
int area;
public:
void get(int b,int h)
{
    cout<<"enter base and height:";
    cin>>b>>h;
    area=0.5*b*h;
}
void display()
{
    cout<<area;
}
};
int main()
{
    int b1,h1,b2,h2,b3,h3;
    teacher t1,t2,t3;
    t1.get(b1,h1);
    cout<<"area of 1st:";
    t1.display();

    cout<<"\n";
    t2.get(b2,h2);
      cout<<"\narea of 2nd:";
    t2.display();
    cout<<"\n";
    t3.get(b3,h3);
    cout<<"\narea of 3rd:";
    t3.display();
}
