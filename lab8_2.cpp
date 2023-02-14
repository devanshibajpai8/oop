#include<iostream>
using namespace std;
class item
{
    int r,p,total;
    public:
    void get()
    {
        cout<<"enter the number of items:";
        cin>>r;
        cout<<"enter the price:";
        cin>>p;
        total=r*p;
           
    }
    void display()
    {
        cout<<"no.of item:";
        cout<<r<<"   ";
        cout<<"price of one book is:";
        cout<<p<<"  ";
        cout<<"total price:";
        cout<<total<<"\n";
        cout<<"---------------------------------"<<"\n";
    }
};
int main()
{
    int n,i;
    cout<<"enter the no. of objects:";
    cin>>n;
    item i1;
    item *it[n];
    
    for(i=0;i<n;i++)
    {
        it[n]=&i1;
        it[i]->get();
        it[i]->display();
    }
    
}