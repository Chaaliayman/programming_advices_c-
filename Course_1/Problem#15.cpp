#include <iostream>
using namespace std;
int read_Numbers_Rectangle_Area(int &a ,int &b)
{
    cout<<"Please enter Number 1?"<<endl;
    cin>>a;
    cout<<"Please enter Number 2?"<<endl;
    cin>>b;
}
int Rectangle_Area(int &a , int &b)
{
    return a * b;
}
int print_Rectangle_Area(int total)
{
    cout<<"\nRectangle Area = "<<total;
}
int main()
{
    int a , b;
    read_Numbers_Rectangle_Area(a,b);
    print_Rectangle_Area(Rectangle_Area(a,b));
}