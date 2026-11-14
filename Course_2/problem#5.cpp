#include <iostream>
using namespace std;
int  ReadPositiveNumber(string Message)
{
    int number = 0;
    do{
        cout<<Message;
        cin>>number;
    }while(number <= 0);
    return number;
}
void PrintDigits(int num)
{
    while(num != 0)
    {
        int digit = num % 10;
        num = num /10;   
        cout<<digit;
    }
}
int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number?"));
    return 0;
}