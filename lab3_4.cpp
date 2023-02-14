#include<iostream>
using namespace std;
class time{
    int hour,minute,second;
    public:
    void get(int hr,int min,int sec)
    {
      
        hour=hr;
        minute=min;
        second=sec;

    }
    void display()
    {
        cout<<hour<<"hr"<<"  "<<minute<<"min"<<"  "<<second<<"sec";

    }
    void sum(time t11,time t22)
    {
        hour=t11.hour+t22.hour;
        minute=t11.minute+t22.minute;
        second=t11.second+t22.second;
    }
};
    int main()
    {
        time t1,t2,t3;
        t1.get(2,34,56);
        t2.get(3,23,46);
        t3.sum(t1,t2);
        t3.display();

    }

