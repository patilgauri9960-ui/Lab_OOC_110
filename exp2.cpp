#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        string name;
        int rollno;
        float marks;
    
    public:
        void input()
        {
            cout<<"Enter your name:-"<<endl;
            cin>>name;
            cout<<"Enter your roll no:-"<<endl;
            cin>>rollno;
            cout<<"Enter your marks:-"<<endl;
            cin>>marks;

        }

        void display()
        {
            cout<<"--Student Details--"<<endl;

            cout<<"Name:-"<<name<<endl;
            cout<<"Roll no:-"<<rollno<<endl;
            cout<<"Marks:-"<<marks;
        }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}

