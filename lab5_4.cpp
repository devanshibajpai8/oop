#include<iostream>
using namespace std;
class time
{
    int hrs;
    int min;
    int sec;
    public:
    time()
    {
        cout<<"enter the hours:";
        cin>>hrs;
        cout<<"enter the minutes:";
        cin>>min;
        cout<<"enter the seconds:";
        cin>>sec;

    }
    void display()
    {
        cout<<"Time:"<<hrs<<":"<<min<<":"<<sec<<"\n";

    }
    time(time t1,time t2)
    {
        hrs=t1.hrs+t2.hrs;
        min=t1.min+t2.min;
        sec=t1.sec+t2.sec;
    }
};
int main()
{
    time t1;
    time t2;
    time t3(t1,t2);
    t3.display();
}