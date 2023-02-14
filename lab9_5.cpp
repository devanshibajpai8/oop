#include<iostream>
using namespace std;
template<class T,int size>
class A
{
    T a[size];
    public:
    void sort()
    {
    cout<<"\n"<<"enter the elements:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int lar=0;
    int i,j;
    for (i = 0; i < size; ++i) 
        {
            for (j = i + 1; j < size; ++j)
            {
                if (a[i] > a[j]) 
                {
                    lar =  a[i];
                    a[i] = a[j];
                    a[j] = lar;
                }
            }
        }
    }
    void display()
    {
        cout<<"in ascending order:";
        for(int i=0;i<size;i++)
        {
        cout<<" "<<a[i];
        }
    }
};
int main()
{
    A<int,5>a1;
    a1.sort();
    a1.display();
    A<float,4>b1;
    b1.sort();
    b1.display();
}