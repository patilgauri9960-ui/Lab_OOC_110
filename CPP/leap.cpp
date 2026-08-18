#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if(n%4==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
    return 0;
}