#include<iostream>
using namespace std;
class STUDENT
{
    protected:
    char name[20];
    int roll;
    public:
    void info()
    {
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the roll:";
        cin>>roll;

    }
};
class SPORTS:virtual public STUDENT 
{
    protected:
    int s_grade;
    public:
    void get()
    {
    cout<<"enter the sports grade:";
    cin>>s_grade;
    }
};
class EXAM:virtual public STUDENT
{
    protected:
    int e_grade;
    public:
    void get_e()
    {
        cout<<"enter the exam grade:";
        cin>>e_grade;
    }
};
class RESULT:public SPORTS,public EXAM
{
    int res;
    public:
    void sum()
    {
        int sum=e_grade+s_grade;
        cout<<"the final result is:"<<sum<<"\n";
        if(sum>=90)
        {
            cout<<"grade is O";
        }
        else if(80<=sum<90)
        {
            cout<<"Grade is E";
        }
        else if(70<=sum<80)
        {
            cout<<"Grade is A";
        }
        else
        {
            cout<<"grade is F";
        }
    }
};
int main()
{
    RESULT r1;
    r1.info();
    r1.get();
    r1.get_e();
    r1.sum();
}