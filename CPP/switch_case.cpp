#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"Enter two numbers:-"<<endl;
    cin>>a>>b;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n";
    cout<<"Enter your choice:-"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Addition:"<<a+b;
            break;

        case 2:
            cout<<"Subtraction:"<<a-b;
            break;

        case 3:
            cout<<"Multiplication:"<<a*b;
            break;

        case 4:
            cout<<"Division:"<<a/b;
            break;

        case 5:
            cout<<"Modulus:"<<a%b;
            break;

        default:
            cout<<"Invalid Choice";
            break;
    }
    return 0;
}