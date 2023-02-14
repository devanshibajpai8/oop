#include<iostream>
using namespace std;
template<class A>
class abc
{
    A a1,a2;
    public:
    void get()
    {
        cout<<"enter the no:";
        cin>>a1>>a2;
    }
    void search()
    {
        
    }
    void display()
    {
        cout<<a1+a2<<"\n";
    }
};
int main()
{
    abc<int>s1;
    abc<float>s2;
    s1.get();
    s1.display();
    s2.get();
    s2.display();
}