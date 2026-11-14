#include <iostream>
using namespace std;
 
 string ReadPinCode()
{
    string PinCode;  
    cout << "Please enter PIN code \n";
    cin >> PinCode;
    return PinCode;
}
int    checkcode(int num)
{
     
     int i = 0;
    do{
        string code = ReadPinCode();
        if(code == "1234")
            cout << "\nYour account balance is " << 7500 << '\n';
            //system("color 2F");
        else
            i++;
             cout << "\nWrong PIN, you have " <<  num - i << " more tries\n"; 
    }while(i < num);
}
int main()
{
    checkcode(3);

    return 0;
}