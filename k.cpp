#include<iostream>
using namespace std;
class function
{
    int num,denom;
    public:
    void get(int n,int d)
    {
      
       num=n;
     
    
       denom=d;
    }
    void display()
    {
        cout<<num<<"/"<<denom;
    }
    void add(int n1,int d1,int n2,int d2)
    {
        num=n1*d2+n2*d1;
        denom=d1*d2;
    }
    
    void sub(function &f11,function &f22)
    {
        num=f11.num*f22.denom-f11.denom*f22.num;
        denom=f11.denom*f22.denom;
    }

    void multiply(function f11,function f22)
    {
        num=f11.num*f22.num;
        denom=f11.denom*f22.denom;
    }
   
};

int main()
{
    int p,q,r,s;
    function x1,x2,x3,x4;
    cin>>p>>q>>r>>s;
    x1.add(p,q,r,s);
     cout<<"addition:";
    x1.display();
    cout<<"\n";
    x1.get(3,5);
    x2.get(4,9);
    x3.sub(x1,x2);
    cout<<"subtraction:";
    x3.display();
    x4.multiply(x1,x2);
    cout<<"\n";
    cout<<"multiply:";
    x4.display();
    
    

}
  
