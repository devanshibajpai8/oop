#include<iostream>
using namespace std;
class abc
{
    char name[20];
    int acc_no;
    char type_acc;
    int balance;
    public:
    void assign()
    {
        cout<<"name of the employee:";
        cin>>name;
        cout<<"account number:";
        cin>>acc_no;
        cout<<"type of account:";
        cin>>type_acc;

    }
    int amnt()
    {
        int amt;
        cout<<"deposit amount:";
        cin>>amt;
        return amt;
    }
    int withdraw()
    {
        int with;
        cout<<"amount to be withdrawn:";
        cin>>with;
        return with;
    }
    int balan(int r,int s)
    {
        int balance;
        cout<<"balance:";
        balance=r-s;
        cout<<balance;
        return balance;
    }
    
    void display(int b)
    {
        int balan;
        cout<<"\nenter the name:";
           cin>>name;
        cout<<"details are:";
        cout<<"\n";
        cout<<acc_no;
        cout<<"\n";
        cout<<type_acc;
        cout<<"\n";
        cout<<"left balance:";
        cout<<b;
        
    }
};
    int main()
    {
        int p,r,s,withdr,amou,bal;
        abc b1;
        b1.assign();
        amou=b1.amnt();
        withdr=b1.withdraw();
        bal=b1.balan(withdr,amou);
        b1.display(bal);
    }

