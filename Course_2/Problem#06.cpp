#include <iostream>
using namespace std;
int  ReadPositiveNumber(string Message)
{
    int Number = 0;
    do{
        cout<<Message<<endl;
        cin>>Number;
    }while(Number <= 0);
    return Number;
}
int sumofdigit(int Number)
{
    int sum = 0;
    while(Number > 0)
    {
        int digit = Number % 10;
        Number = Number / 10;
        sum = sum + digit;
    }
    return sum;
}
int main()
{
    cout << "\nSum Of Digits = " 
    << sumofdigit(ReadPositiveNumber("Please enter a positive number?")) << "\n";
}