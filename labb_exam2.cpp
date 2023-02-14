#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    void get(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    void swap()
    {
        int z;
        z=this->x;
        this->x=this->y;
        this->y=z;
    }
    void display()
    {
        cout<<"swapped no:"<<x<<" "<<y;
    }
};
int main()
{
    A a;
    int x;
    int y;
    cout<<"enter the no:";
    cin>>x>>y;
    a.get(x,y);
    a.swap();
    a.display();
}