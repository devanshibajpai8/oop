#include<iostream>
using namespace std;
struct shop
{
    int total,p,r;
    public:
    void get()
    {
        cin>>p>>r;
        total=p*r;

    }
    void display()
    {
        cout<<"total:"<<total;

    }
};
int main()
{
    shop s1,s2,s3;
    
    cout<<"rib001"<<"     "<<"printercatriage"<<"   ";s1.get();s1.display();
    cout<<"\npap45"<<"   "<<"a4 size paper"<<"    ";s2.get();s2.display();
    cout<<"\nbk2109"<<"   "<<"computer book"<<"   ";s3.get();s2.display(); 
}