#include<iostream>
using namespace std;

class comp
{

   int r,im;
public:
void get()
 
{
    static int i=1;
     cout<<"\nEnter real and imaginary part of "<<i<<"st:";
      cin>>r>>im;
     i++;
     sum();
}
void sum()
{
    static int i=1;
     cout<<"\nThe sum of complex no "<<i<<" is :"<<r<<"+"<<im<<"i";
      i++;
}
};
int main()
{
    comp c1,c2,c3;
    c1.get();
    c2.get();
    c3.get();
    return 0;
}
