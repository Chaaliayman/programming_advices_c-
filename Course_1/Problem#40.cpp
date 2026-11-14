#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    float number = 0;
    do{
        cout<<Message;
        cin>>number;
    }while(number <= 0);
    return number;
}
float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;   
    return TotalBill;
}
int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service and Tax = "<< TotalBillAfterServiceAndTax(TotalBill) << endl;
}