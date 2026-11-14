#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int number;
    do{
        cout<<Message;
        cin>>number;
    }while(number < 0);
    return number;
}
int Factorial(int N)
{
    int f = 1;
    for(int i = N; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
int main()
{
 cout<<Factorial(ReadPositiveNumber("Please enter a positive number???"))<<endl;
}