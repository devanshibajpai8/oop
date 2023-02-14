#include<iostream>
using namespace std;
struct clas
{
    char name[20];
    int roll;
    int marks[5];

};
int main()
{
    struct clas c[1];
    int i,sum;
    float percentage;
    printf("enter name:");
    scanf("%s",c[1].name);
    printf("enter roll:");
    scanf("%d",&c[1].roll);
    for(i=0;i<5;i++)
    {
        printf("enter marks of %d:",i+1);
        scanf("%d",&c[1].marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+c[1].marks[i];
      
    }
        percentage=sum/5;
         printf("sum:%d\n",sum);
        printf("percentage:%f",percentage);

return 0;
}
