#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t,rem,deci=0,base=1;
	int flag=1;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int s;
	    cin>>s;
	    while(s!=0)
	    {
	        rem=s%10;
	        deci=deci+rem*base;
	        s=s/10;
	        base=base*2;
	    }
	    for(int i=2;i<=sqrt(s);i++)
	    {
	        if(deci%i==0)
	        {
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	    
	}
	return 0;
}