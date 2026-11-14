#include <iostream>
using namespace std;
float ReadCircumference()
{
    float L; 
     cout << "Please enter Circumference? \n";
    cin >> L;
    return L;  
}
float CircleAreaByCircumference(float L)
{
    return (L * L) / (4 * 3.141592653589793238);
}
void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));
    return 0;
}