#include <iostream>
using namespace std;
short readAge()
{
    short age;
    cout << "Please enter an Age between 18 and 45 ? " << endl;
    cin>>age;
    return age;
}
bool ValidateNumberInRange(short Number,short from,short to)
{
    return (Number >= from && Number <= to);
}
short ReadUntilAgeBetween(short from , short to)
{
    short age = 0;   
    do{    
       age = readAge();
    }while(!ValidateNumberInRange(age,from,to));
        return age;
}
void PrintResult(short age)
{
    cout<<"Your Age is: "<<age<<endl;
}
int main()
{
    PrintResult(ReadUntilAgeBetween(18,45));
    return 0;
}