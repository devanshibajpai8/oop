#include<iostream>
using namespace std;
class fraction
{
private: 
int num;
int deno;
public:
void getdata(void)
{
cout<<"\nEnter numerator :";
cin>>num;
cout<<"Enter denomintor:";
cin>>deno;
}
void add(fraction t11,fraction t22)
{
num=(t11.num*t22.deno)+(t22.num*t11.deno);
deno=t11.deno*t22.deno;
}
fraction sub(fraction &t22)
{
fraction a;
a.num=(num*t22.deno)-(t22.num*deno);
a.deno=deno*t22.deno;
return(a);
}
void mul(fraction t11,fraction t22)
{
num=t11.num*t22.num;
deno=t11.deno*t22.deno;
}
void div(fraction t11,fraction t22)
{
num=t11.num*t22.deno;
deno=t11.deno*t22.num;
}
void display(void)
{
cout<<num<<"/"<<deno;
}
};
int main()
{
fraction t1,t2,t3;
cout<<"Enter data for fraction no.1 :";
t1.getdata();
cout<<"\nEnter data for fraction no.2 :";
t2.getdata();
cout<<"\nSum :";
t3.add(t1,t2);
t3.display();
cout<<"\nSubstraction :";
t3=t1.sub(t2);
t3.display();
cout<<"\nMultiplication :";
t3.mul(t1,t2);
t3.display();
cout<<"\nDivision :";
t3.div(t1,t2);
t3.display();
return 0;
}