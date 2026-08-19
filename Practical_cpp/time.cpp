#include<iostream>
using namespace std;
class time
{
    int h,m,s;
    public:
    void getTime()
    {
        cout<<"Enter hours,minutes and seconds:"<<endl;
        cin>>h>>m>>s;

    }
    void add(Time t)
    {
        int hh,mm,ss;
        ss=s+t.s;
        mm= m+t.m+ss/60;
        ss=ss%60;

        hh=h+t.h+mm/60;
        mm=mm%60;
        cout<<"Addition ="<<hh<<":"<<mm<<":"<<SS<<endl;
    }
    void subtract()
    {
        int hh,mm,ss;
        ss=s-t.s;
        mm=m-t.m;
        hh=h-t.h;

        if(ss<0)
        {
            ss=ss+60;
            mm--;
        }
        cout<<"Subtraction ="<<hh<<":"<<mm<<":"<<ss;
    }
};
int main()
{
    time t1,t2;
    cout<<"Enter first time:"
}