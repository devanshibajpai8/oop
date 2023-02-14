#include<iostream>
using namespace std;
class rectangle
{
    int area,length,breadth;
    public:
    void get()
    {
        cout<<"length and breadth:";
        cin>>length>>breadth;
    }
    
    void area1()
    {
        area=length*breadth;
        cout<<"area:"<<area;
    }
    friend void are(rectangle);
};
    void are(rectangle a11)
    {
        
        cout<<"\narea with friend function:"<<a11.length*a11.breadth;
        
    }

int main()
{
    rectangle a1;
    int p,q;
    a1.get();
    a1.area1();
    are(a1);
   
}