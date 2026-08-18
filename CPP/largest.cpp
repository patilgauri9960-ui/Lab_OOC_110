#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Largest number is:"<<a<<endl;
    }
    else
    {
       cout<<"Largest number is:"<<b<<endl;  
    }
    return 0;
}