#include<iostream>
using namespace std;
#include<math.h>
class slope
{
    float dis;
    public:
    void distance(int x1,int y1,int x2,int y2)
    {
        cout<<"enter value x1,y1 and x2,y2 respectively:";
        cin>>x1>>y1>>x2>>y2;
        dis=sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
    }
    void display()
    {
        cout<<"distance:"<<dis;
    }
}s1;
int main()
{
   
  
    int p,q,r,s;
    s1.distance(p,q,r,s);
    s1.display();


}
