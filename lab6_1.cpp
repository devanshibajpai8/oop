#include<iostream>
using namespace std;
class CIRCLE
{
    public:
    int r;
    float area;
    CIRCLE()
    {
        cout<<"enter the radius:";
        cin>>r;
        area=3.14*r*r;
    }
};
class RECTANGLE:public CIRCLE
{
    int b;
    public:
    int area_rect;
    RECTANGLE()
    {
        cout<<"enter the breadth:";
        cin>>b;
        area_rect=r*b;
    }
    void display()
    {
        cout<<area<<"\n";
        cout<<area_rect;
    }
};
int main()
{
    RECTANGLE c1;
    c1.display();
}