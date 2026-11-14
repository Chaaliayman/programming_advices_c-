#include <iostream>
using namespace std;
struct invoice
{
    int totalbill;
    int cashPaid;
};
invoice read_number()
{
    invoice number;
    cout << "Enter total bill: ";
    cin>>number.totalbill;
    cout << "Enter cash paid: ";
    cin>>number.cashPaid;

    return number;
}
int Calculate(invoice number)
{
   return number.totalbill - number.cashPaid;
}
int main()
{ 
    invoice number = read_number();
    cout << "Total Bill = " <<number.totalbill << endl;
    cout << "Total Cash Paid = " << number.cashPaid  << endl;
    cout << "***************************\n";   
    cout<<"Remainder = " <<Calculate(number);
}