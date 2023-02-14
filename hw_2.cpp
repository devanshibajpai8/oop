#include<iostream>
using namespace std;
class distance
{
        int feet;
        float inches;
        public:
        void data()
        {
                cout<<"enter data in feet:";
                cin>>feet;
                cout<<"enter data in inches:";
                cin>>inches;
        }
        void sum(distance d1,distance d2)
        {
                feet=d1.feet+d2.feet;
                inches=d1.inches+d2.inches;
        }
        void display()
        {
                cout<<"sum in feet:"<<feet<<"\n"<<"sum in inches:"<<inches;
        }
};
        int main()
        {
                class distance d1,d2,d3;
                d1.data();
                d2.data();
                d3.sum(d1,d2);
                d3.display();
        }

       
