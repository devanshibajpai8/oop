#include<iostream>
using namespace std;
class dist
{
        int feet;
        float inches;
        public:
        dist()
        {
                cout<<"enter data in feet:";
                cin>>feet;
                cout<<"enter data in inches:";
                cin>>inches;
        }
        dist(int f,int i)
        {
            feet=f;
            inches=i;
        }
        dist(dist d1,dist d2)
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
    dist d1;
    dist d2(5,6);
    dist d3(d1,d2);
    d3.display();

}


            