#include <iostream>
using namespace std;
enum enOperationType {Add = '+',Subtract = '-', Multiply = '*', Divide = '/' };
float Readnumber(string Message)
{
    float Number  = 0;
    cout << Message << endl;
    cin >> Number ;

    return Number ;
}
enOperationType readOperation()
{
    char OT = '+';
    cout << "Please enter Operation Type ( +, - , * , / )?\n";
    cin >> OT;
    return (enOperationType)OT;
}
float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType){
    case enOperationType::Add:
        return Number1 + Number2;
    case  enOperationType::Subtract:
        return Number1 - Number2;
    case  enOperationType::Multiply:
        return Number1 * Number2;
    case  enOperationType::Divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}
int main()
{
    float Number1 = Readnumber("Please enter the first number?");
    float Number2 = Readnumber("Please enter the second number?");
    enOperationType OpType = readOperation();
    cout<<"Result = "<<Calculate(Number1,Number2,OpType);
}