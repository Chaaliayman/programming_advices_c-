#include <iostream>
using namespace std;
void readNamber(int &NUM1,int &NUM2,int &NUM3)
{
    cout<<"enter your number 1:";
    cin>>NUM1;

    cout<<"enter your number 2:";
    cin>>NUM2;

    cout<<"enter your number 3:";
    cin>>NUM3;
}
int printof3number(int NUM1,int NUM2,int NUM3)
{
    return  NUM1 + NUM2 + NUM3;
}
void printtotal(int total)
{
    cout<<"The total sum of number is  "<<total<<endl;
}
int main()
{
    int NUM1,NUM2,NUM3;
    readNamber(NUM1,NUM2,NUM3);
   printtotal(printof3number(NUM1,NUM2,NUM3));
}