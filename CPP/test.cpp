#include<iostream>
using namespace std;
class Student
{
    public:
    int roll_no;
    string name;
    int attendence;


    public:
    Student()
    {
        cout<<"I am the constructor of class Student:---"<<endl;

    }

    Student(int r,string n)
    {
        roll_no=r;
        name=n;
    }
    Student(int att)
    {
        attendence=att;
    }

    void putdata(int r1, string n1)
    {
        cout<<"Roll no:-"<<roll_no<<endl;
        cout<<"Name :-"<<name<<endl;
    }

    void putdata(int attendence)
    {
        cout<<"Attendence:"<<attendence;
    }
};
int main()
{
    Student s1;
    Student s2(110,"Gouri");
    Student s3(75);
    s2.putdata(s2.roll_no,s2.name);
    s3.putdata(s3.attendence);                                                             
    return 0;
}