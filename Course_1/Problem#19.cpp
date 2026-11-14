#include <iostream>
#include <cmath>
using namespace std;
float ReadDiameter()
{
    float D;
    cout << "Please enter diameter D ? " << endl;
    cin >> D;
    return D;
}
float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;
    float area = (PI * D * D ) / 4;
    return area;
}
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));
    return 0;
}