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
int ReverseNumber(int num)
{
    int x = 0;
    while(num > 0)
    {
        int digit = num % 10;
        num = num /10;
        x = x * 10 + digit;
    }
    return x;
}
int main()
{
    cout<<" \nReverse is:\n"<<ReverseNumber(ReadPositiveNumber("Please enter a positive number?"));
    return 0;
}