#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int number = 0;
    do{
        cout<<Message;
        cin>>number;
    }while(number < 0);
    return number;
}
int ReverseNumber(int Number)
{
    int x = 0;
    while(Number > 0)
    {
        int digit = Number % 10;
        Number = Number / 10;
        x = x * 10 + digit;
    }
    return x;
}
void PrintDigits(int Number)
{
    int digit = 0;
    while(Number > 0)
    {
        digit = Number % 10;
        Number = Number / 10;
        cout<<digit<<endl;
    }
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number?");
    PrintDigits(ReverseNumber(number));
    return 0;
}