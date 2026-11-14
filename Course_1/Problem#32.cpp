#include  <iostream>
using namespace std;
int ReadNumber()
{
    int Number;
    cout << "Please enter a number? " << endl;
    cin >> Number;
    return Number;
}
int ReadPower()
{
    int Number;
    cout << "Please enter the power? " << endl;
    cin >> Number;
    return Number;  
}
int PowerOfM(int Number, int M)
{
    int P;
    if(M == 0)
        return 1;
    P = 1;
    for(int i = 1; i <= M; i++)
    {
        P = P * Number;
    }
    return P;
}
int main()
{
    cout<<"Result = "<<PowerOfM(ReadNumber(),ReadPower())<<endl;
}