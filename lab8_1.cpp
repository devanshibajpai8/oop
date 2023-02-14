#include<iostream>
using namespace std;
class item
{
    int n,p,total;
    public:
    void get()
    {
        cout<<"enter the number of items:";
        cin>>n;
        cout<<"enter the price:";
        cin>>p;
        total=n*p;
           
    }
    void display()
    {
        cout<<"no.of item:";
        cout<<n<<"   ";
        cout<<"price of one book is:";
        cout<<p<<"  ";
        cout<<"total price:";
        cout<<total;
    }
};
int main()
{
    item i1;
    i1.get();
    i1.display();
    item *it;
    it=&i1;
    cout<<"\n------------now by pointer to object-------------\n";
    it->get();
    it->display();
}