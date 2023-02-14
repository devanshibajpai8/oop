#include<iostream>
using namespace std;
template<class T1>
    void search(T1 x[])
    {
        
        T1 k;
        cout<<"enter the element:";
        cin>>k;
        for(int i=0;i<5;i++)
        {
            if(k==x[i])
            {
               cout<<x[i]<<" present at position "<<i<<""<<"\n"; 
            }
            
        }
    }
    int main()
    {
        int n[5];
        cout<<"enter the elements:";
        for(int i=0;i<5;i++)
        {
            cin>>n[i];
        }
        search(n);
        char b[5];
        cout<<"enter the elements:";
        for(int i=0;i<5;i++)
        {
            cin>>b[i];
        }
        search(b);
       
    }

    
