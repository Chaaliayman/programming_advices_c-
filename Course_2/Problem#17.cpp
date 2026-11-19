#include <iostream>
using namespace std;
void GuessPassword()
{
    string current = "";
    int Counter = 0;
    for(int i = 65;i <= 90;i++)
    {
        for(int j = 65;j <= 90;j++)
        {
            for(int c = 65;c <= 90;c++)
            {
                current="";
                current += char(i);
                current += char(j);
                current += char(c);
                Counter++;
                cout << "Trial [" << Counter << "] : "<<current<<endl;
                if(current == "AAF")
                {
                    cout << "\nPassword is " << current << "\n";
                    cout << "Found after " << Counter << " Trial(s)\n";          
                    return;    
                }
            }
        }
    cout << "\n____________________________\n";
    }
}
int main()
{
    GuessPassword();
    return 0;
}
