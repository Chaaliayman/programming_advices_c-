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
    char charrand = rand() % (To - From + 1) + From;
    return charrand;
}
void latterkey(int Number)
{
    int counter = 1;
    for(int N = 0;N < Number;N++)
    {
        cout<<"key[ "<<counter<<" ] ";
        for(int i = 1; i < 4;i++)
        {
            for(int j = 1;j < 4;j++)
            {
                cout<< randNumber(65,90);
            }
            if(i < 3)
            {
                cout<<"-";
            }
            
        }
        cout<<endl;
        counter++;
    }
}
int main()
{
    int number = ReadPositiveNumber("Pleaes enter how many keys to generate? \n ");
    latterkey(number);
}