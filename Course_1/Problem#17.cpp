#include <iostream>
#include<cmath>
using namespace std;
void ReadNumbers(float &A ,float &H)
{
    cout << "Please enter triangle base A ? " << endl;
    cin >> A;

    cout << "Please enter triangle height H ? " << endl;
    cin >> H;
}
float TriangleArea(float A , float H)
{
    float area = (A / 2) * H;
    return  area;
}
void  PrintResult(float Area)
{
    cout<<"\nTriangle Area = "<<Area;
}
int main()
{
    float a , b;
    ReadNumbers(a,b);
    PrintResult(TriangleArea(a,b));
}