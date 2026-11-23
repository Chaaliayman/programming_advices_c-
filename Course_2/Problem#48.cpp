#include <iostream>
#include <cmath>
using namespace std;
int MyFloor(float Number)
{
    if(Number > 0)
        return int(Number);
    return Number - int(Number);
}
float readnumber()
{
    int number;
    cout<<"please enter number :";
    cin>>number;
    return number;
}
int main()
{
    float Number = readnumber();   
    cout << "My MyFloor Result : " << MyFloor(Number) << endl;
    cout << "C++ floor Result  : " << floor(Number) << endl;
    return 0;  
}