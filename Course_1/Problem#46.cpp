#include <iostream>
using namespace std;
void PrintLettersAtoZ()
{
    char i = 'a';
    while(i <= 'z')
    {
        cout<<i<<endl;
        i++;
    }
}
int main()
{
    PrintLettersAtoZ();
    return 0;   
}