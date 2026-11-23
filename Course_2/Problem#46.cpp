#include <cmath>
#include <iostream>
using namespace std;
float Myabs(int num)
{
    if(num > 0)
        return num;   
    return num * -1;
}
float readnumber()
{
    float number;
    cout<<"please enter number :";
    cin>>number;
    return number;
}
int main()
{
    float number ;
    cout << "Number : " << Myabs(readnumber()) << "\n";
   cout<<"C++ ABS RESULT : "<<abs(readnumber());
    return 0;
}
