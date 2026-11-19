#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number;
    do{
        cout<<Message;
        cin>>Number;
    }while(Number < 0);
    return Number;
}
char randNumber(char From , char To)
{
    
}