#include<iostream>
using namespace std;
void area_vol(int r)

{
    cin>>r;
    cout<<"area of circle:"<<3.14*r*r;

}

void area_vol(float r)
{
    cin>>r;
    cout<<"volume of sphere:"<<1.34*3.14*r*r;
}
int main()
{
    int x;
    float y;
    area_vol(x);
    area_vol(y);

}