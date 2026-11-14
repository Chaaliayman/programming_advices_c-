#include <iostream>
using namespace std;
float ReadSquareSide()
{
    float A;
    cout << "Please enter square side A ? " << endl;
    cin>>A;
    return A;
}
float CircleAreaInscribedInSquare(float A)
{   
    const float PI = 3.141592653589793238;
    float area =(PI * (A * A)) / 4;
    return area;
}
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}