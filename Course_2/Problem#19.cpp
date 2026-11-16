#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
int main()
{
    srand((unsigned)time(NULL));
    cout<<RandomNumber(10,22)<<endl;
    cout<<RandomNumber(10,22)<<endl;
    cout<<RandomNumber(1,22)<<endl;
    return 0;
}