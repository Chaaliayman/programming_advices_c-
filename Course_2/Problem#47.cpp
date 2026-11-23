#include <iostream>
#include <cmath>
using namespace std;
float GetFractionPart(float Number)
{
    return Number - int(Number);
} 
int MyRound(float Number)
{
    int IntPart = int(IntPart);
    float FractionsPart =  GetFractionPart(Number);
    if(abs(FractionsPart) >= 0.5)
    {
        if(Number > 0)
        {
            IntPart++;
        }
        else{
            IntPart--;
        }
    }
    else{
        return IntPart;
    }
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
    float number = readnumber();
    cout<<"My Round Result : "<< MyRound(number)<<endl;
    cout << "C++ Round Result: " << round(number) << endl;

}