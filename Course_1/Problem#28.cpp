#include <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please enter a number? " << endl;
    cin >> Number;
    return Number;
}
void SumOddNumbersFrom1toN_UsingFor(int N)
{
    int sum = 0;
    cout << "Sum odd numbers using For Statement:\n";
    for(int i = 1; i < N; i+=2)
    {
         sum = sum + i;
    }
    cout<<sum<<endl;
}
int main()
{
    int N = ReadNumber();
    SumOddNumbersFrom1toN_UsingFor(N);
    return 0;
}