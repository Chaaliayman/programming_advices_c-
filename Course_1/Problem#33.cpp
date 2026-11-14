#include <iostream>
using namespace std;
int ReadNumberInRange()
{
    int grade;
    cout << "Please enter a Grade between ";
    cin>>grade;
    return grade;
}
char GetGradeLetter(int Grade)
{
    if(Grade >= 90 && Grade <= 100)
        return 'A';
    else if(Grade >= 80 && Grade <= 89)
        return 'B';
    else if(Grade >= 70 && Grade <= 79)
        return 'C';
    else if(Grade >= 60 && Grade <= 69)
        return 'D';
    else if(Grade >= 50 && Grade <= 59)
        return 'E';
    else    
        return 'F';
}
int main()
{
    cout<<"Result  =  "<<GetGradeLetter(ReadNumberInRange());
}