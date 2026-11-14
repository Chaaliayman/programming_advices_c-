#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do{
        cout<<Message;
        cin>>Number;
    }while(Number <= 0);
    return Number;
}
int HoursToDays(int Numberofhours)
{
    return Numberofhours / 24;
}
float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / (24 * 7);
}
int DaysToWeeks(int NumberOfHours)
{
    return NumberOfHours / 7;
}
 
int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);
    cout<<"Total Hours ="<<NumberOfHours<<endl;
    cout << "Total Days = " << NumberOfWeeks << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

}