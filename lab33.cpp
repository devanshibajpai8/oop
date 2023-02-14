#include<iostream>
using namespace std;
class fac
{
    int n,f;
    public:
    void f1()
    {
        f=1;
        cout<<"enter the no.:";
        cin>>n;
        for(int i=n;i>0;i--)
        f=f*i;
        cout<<"factorial is  "<<f<<"  of "<<n;
    }
};
int main()
{
    fac a1;
    a1.f1();
}
