#include <iostream>
using namespace std;
string ReadText()
{
    string test;
    cout<< "Please enter Text?\n";
    getline(cin,test);
    return test;
}
string EncryptText(string test)
{
    for(int i = 0; i < test.length();i++)
    {
        test[i] += 2; 
    }
    return test;
}
string DecryptText(string test)
{
    for(int i = 0; i < test.length();i++)
    {
        test[i] -= 2; 
    }
    return test;
}
void printstring(string test)
{
    string encrypted = EncryptText(test);
    string decrypted = DecryptText(encrypted);
    cout << "Text After Encryption  : " <<encrypted<< endl;
    cout << "Text After Decryption  : " << decrypted<< endl;
}
int main()
{
    printstring(ReadText());   
}