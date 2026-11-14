#include <iostream>
using namespace std;
int readNumber()
{
    int num ;
    cout<<"Please enter a number?";
    cin>>num;
    return num;
}
void PrintRangeFromNto1_UsingFor(int num)
{
    cout << "Range printed using While Statement:\n";
    for(int i = num ;i >= 1 ;i--)
    {
        cout<<i<<endl;
    }
}
int main()
{
    PrintRangeFromNto1_UsingFor(readNumber());
}