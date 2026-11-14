#include <iostream>
using namespace std;
int readNumber()
{
    int num ;
    cout<<"Please enter a number?";
    cin>>num;
    return num;
}
void PrintRangeFrom1toN_UsingWhile(int num)
{
    int i = 0;
    cout << "Range printed using While Statement:\n";
    while(i <= num)
    {
        cout<<i<<endl;
        i++;
    }
}
int main()
{
    PrintRangeFrom1toN_UsingWhile(readNumber());
}