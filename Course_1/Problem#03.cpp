#include <iostream>
using namespace std;
enum enNumberType {Odd = 1 , Even = 2};
int read_number()
{
    int a;
    cout<<"please enter number?"<<endl;
    cin>>a;
    return a;
}
enNumberType checkNumberType(int a)
{
    int ruselt = a % 2;
    if(ruselt == 0)
    {
        return enNumberType::Even;
    }
    else
    {
        return enNumberType::Odd;
    }
}
void PrintnumberType(enNumberType numbertype)
{
    if(numbertype == enNumberType::Even)
        cout<<"\n number is even. \n";
    else
        cout<<"\n number is odd \n";
}
int main () 
{
    PrintnumberType(checkNumberType(read_number()));
    return 0;
}