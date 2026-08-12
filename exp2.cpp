#include<iostream>
#include<string>
using namespace std;
void input();
class student
{
    private:
        string name;
        int rollno;
        float marks;
    
   // public:
        void input()
        {
            cout<<"Enter your name:-"<<endl;
            cin>>name;
            cout<<"Enter your roll no:-"<<endl;
            cin>>rollno;
            cout<<"Enter your marks:-"<<endl;
            cin>>marks;

        }
        public:
        void display()
        {
            input();
            cout<<"--Student Details--"<<endl;

            cout<<"Name:-"<<name<<endl;
            cout<<"Roll no:-"<<rollno<<endl;
            cout<<"Marks:-"<<marks;
        }
};
int main()
{
   
    student s;
    input();
    //s.rollno=100;
    s.display();
    return 0;

   
}
void input()
    {
        cout<<"Calling the method outside the class..."
    }

