#include<iostream>
using namespace std;
template<class T1,int max>
int sortt(T1 a[],int size)
{
    cout<<"enter the elements:";
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
        for(i=0;i<size;i++)
        {
        cout<<"in ascending order:"<<a[i];
        }
}
int main()
    {
        int s;
        int ar[s];
        cout<<"enter the size of array:";
        cin>>s;

        sortt<int,100>(ar,s);
    }
