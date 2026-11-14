#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float &R)
{
    cout << "Please enter radius R ? " << endl;
    cin >> R;
}
float CircleArea(float R)
{
    return pow(R,2) * 3.141592653589793238 ;
}
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    float R;
    ReadNumbers(R);
    PrintResult(CircleArea(R));
    return 0;
}