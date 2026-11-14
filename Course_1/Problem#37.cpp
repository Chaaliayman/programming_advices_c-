#include <iostream>
using namespace std;
int readName()
{
    int     num ;
    int     sum;
    do{
    cout<<"Please enter Number ";
    cin>>num;
    if(num != -99)
    {
        sum = sum + num;
    }
    }while(num != -99);
    
    return sum ;
}

int main()
{
    int sum =readName();
    cout <<"Result = "<<sum;
    return 0;
}