#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    void get(int x)
    {
        this->x=x;
    }
    void display()
    {
        cout<<"by this pointer value is:"<<x;
    }
};
int main()
{
    A a;
    int x;
    cout<<"enter the value:";
    cin>>x;
    a.get(x);
    a.display();
}