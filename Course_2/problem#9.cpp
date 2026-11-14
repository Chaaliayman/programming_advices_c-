#include <iostream>
using namespace std;
int ReadNumber()
{
    int number = 0;
    cout<<"Please enter a positive number?";
    cin>>number;
    return number;
}
int CountDigitFrequency(int number , int to_find)
{
    int counter = 0;
    while(number > 0)
    {
        int digit = number % 10;
        if(digit == to_find)
            counter++;
        number = number / 10;
    }
    return counter;
}
void PrintAllDigitsFrequencey(int number)
{
    for(int i = 0; i < 10;i++)
    { 

        short DigitFrequency  = 0;
        DigitFrequency = CountDigitFrequency(number,i);
        if(DigitFrequency > 0)
        {
            cout<<"Digit "<<i<<" Frequency is "<<DigitFrequency<<" Time(s).\n";
        }
    }
}
int main()
{
    int number = ReadNumber();
    PrintAllDigitsFrequencey(number);
}