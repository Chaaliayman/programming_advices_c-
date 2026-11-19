#include <iostream>
using namespace std;
void PrintAllFromAAAtoZZZ()
{
    for(int i = 65;i <= 90;i++)
    {
        for(int j = 65;j <= 90;j++)
        {
            for(int c = 65;c <= 90;c++)
            {

                cout<<char(i)<<char(j)<<char(c)<<endl;
             }
        }
    cout << "\n____________________________\n";
    }
}
int main()
{
    PrintAllFromAAAtoZZZ();
    return 0;
}
