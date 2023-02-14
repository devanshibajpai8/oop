#include<iostream>
using namespace std;
template<class T>
class xyz
{
    public:
    int n;
    T a[];
    void get()
    {
        cout<<"enter the size of array:";
        cin>>n;
        cout<<"enter the array:";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void search()
    {
        T k;
        cout<<"enter the no. to be searched:";
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(k==a[i])
            {
                cout<<"element found"<<"\n";
            }
        }

    }
    void sum()
    {
        T summ;
        for(int i=0;i<n;i++)
        {
            summ=summ+a[i];
        }
        cout<<"summation is:"<<summ<<"\n";
    }
    void large_min()
    {
        T lar;
        for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (a[i] > a[j]) 
                {
 
                    lar =  a[i];
                    a[i] = a[j];
                    a[j] = lar;
 
                }
 
            }
 
        }
        cout<<"second smallest no:"<<a[1]<<"\n";
        cout<<"second largest no:"<<a[n-2]<<"\n";
    }

};
int main()
{
    xyz<int>x1;
    xyz<float>x2;
    x1.get();
    x1.search();
    x1.sum();
    x1.large_min();
    x2.get();
    x2.search();
    x2.sum();
    x2.large_min();
}