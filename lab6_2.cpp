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
   
    public:
     int b;
    int area_rect;
    RECTANGLE()
    {
        cout<<"enter the breadth:";
        cin>>b;
        area_rect=r*b;
    }
};
class BOX:public RECTANGLE
{
    int h;
    public:
    int vol;
    BOX()
    {
        cout<<"enter the height of the box:";
        cin>>h;
        vol=r*b*h;
    }
    void display()
    {
        cout<<area<<"\n";
        cout<<area_rect<<"\n";
        cout<<vol;
    }
};
int main()
{
    BOX b1;
    b1.display();
}