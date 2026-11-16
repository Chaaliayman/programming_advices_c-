#include <iostream>
using namespace std;
enum enPrimNotPrime {NotPrime = '0',Prime = '1'};
int read_number()
{       
    int num ;
    cout<<"Please enter a positive number?";
    cin>>num;
    return num;
} 
int ft_is_prime(int num)
{
    if(num < 2)
        return enPrimNotPrime::NotPrime;
    int i = 2;
    while(i <= num / 2)
    {
        if(num % i == 0)
            return enPrimNotPrime::NotPrime;
        i++;
    }   
    return enPrimNotPrime::Prime;
}
void PrintNumberType(int num)
{ 
    cout<<"Prime Numbers from"<<1<<"to"<<num <<"are : "<<endl;
    for(int i = 1; i < num ;i++)
    {
        if(ft_is_prime(i) == Prime)
            cout<<i<<" ";
     }
}
int main()
{
    PrintNumberType(read_number());
}