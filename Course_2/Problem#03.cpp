#include <iostream>
using namespace std;
int  ReadPositiveNumber(string Message)
{
    int number;
    do{
        cout<<Message;
        cin>>number;
    }while(number <= 0);
    return number;
}
bool isPerfectNumber(int Number)
{
    int sum = 0;
    for(int i = 1;i < Number;i++)
    {
        if(Number % i == 0)
        {
            sum = sum + i;
        }
    }
    if(Number == sum)
        return true;
    else
        return false;
}
void PrintResults(int Number)
{
    if (isPerfectNumber(Number))
        cout << Number << " Is Perfect Number.\n";   
    else
        cout << Number << " Is NOT Perfect Number.\n"; 
}
int main(){
    PrintResults(ReadPositiveNumber("Please enter a positive number?"));
    return 0;
}
