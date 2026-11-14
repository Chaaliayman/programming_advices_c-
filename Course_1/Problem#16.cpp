#include <iostream>
#include<cmath>
using namespace std;
void ReadNumbers(float &a ,float &b)
{
    cout<<"Please enter rectangle side A?"<<endl;
    cin>>a;
    cout<<"Please enter rectangle diagonal D?"<<endl;
    cin>>b;
}
float RectangleAreaBySideAndDiagonal(float &a , float &b)
{
    return a * sqrt(b * b - a * a);
}
void  PrintResult(float total)
{
    cout<<"\nRectangle Area = "<<total;
}
int main()
{
    float a , b;
    ReadNumbers(a,b);
    PrintResult(RectangleAreaBySideAndDiagonal(a,b));
}