#include<iostream>
using namespace std;
class player
{
    int player_no;
    char name[20];
    int score;
    public:
    friend void operator >>(istream &in,player &p2)
    {
        cout<<"enter the player_no:";
        in>>p2.player_no;
        cout<<"enter the name:";
        in>>p2.name; 
        cout<<"enter the score:";
        in>>p2.score;
    }
    friend void operator <<(ostream &o1,player p1)
    {
        o1<<p1.player_no<<" ";
        o1<<p1.name<<" ";
        o1<<p1.score<<" ";
    }
};
int main()
{
    player p11;
    cin>>p11;
    cout<<p11;
}
