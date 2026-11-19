#include <iostream>
using namespace std;
enum palindrome {palindrome = 1,
                Notpalindrome = 0};
int ReadPositiveNumber(string Message)
{
    int number = 0;
    do{
        cout<<Message<<endl;
        cin>>number;
    }while(number < 0);
    return number;
}
int ReverseNumber(int number)
{
    int x = 0;
    while(number > 0)
    {
        int digit = number % 10;
        number = number / 10;
        x = x * 10 + digit; 
    }
    return x;
}
bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}
void PrintPalindromeNumberandNotPalindromeNumber(int number)
{
    if(IsPalindromeNumber(number) == palindrome::palindrome)
    {
        cout << "\nYes , it is a Palindrome number.\n";   
    }
    else 
    {
        cout << "\nNo , it is NOT a Palindrome number.\n";
    }
}
int main()
{
    int number = ReadPositiveNumber("Please enter a positive number");
    PrintPalindromeNumberandNotPalindromeNumber(number);
    return 0;
}
