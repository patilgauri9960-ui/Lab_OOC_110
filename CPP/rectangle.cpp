#include<iostream>
using namespace std;
int main()
{
    int lenght,breadth,area,perimeter;
    cout<<"Enter the lenght and breadth of rectangle:-"<<endl;
    cin>>lenght>>breadth;
    area=lenght*breadth;
    perimeter=2*(lenght+breadth);
    cout<<"Area of Rectangle:"<<area<<endl;
    cout<<"Perimeter of Rectangle:"<<perimeter<<endl;
    return 0;
}