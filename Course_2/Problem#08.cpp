#include <iostream>
using namespace std;
int readnumber()
{
    int number;
    cout<<"Please enter a positive number?";
    cin>>number;
    return number;
}
int counter(int num , int to_find)
{
    int counter =0;
    while(num > 0)
    {
        int digit = num % 10;
        if(digit == to_find)
            counter++;
        num = num / 10;
        
    }
    return counter;
}

int main()
{
    int number = readnumber();
    short to_find ;
    cout<<"Please enter one digit to check?";
    cin>>to_find;
    cout<<"Frequency is : "<<counter(number,to_find);
    return 0;
}