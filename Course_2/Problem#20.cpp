#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum enCharType { SamallLetter = 1,
                  CapitalLetter = 2,
                  SpecialCharacter  = 3,
                  digit = 4  
                };
int RandomNumber(int From, int To)
{
    char Random = rand() % (To - From + 1) + From;
    return Random;
}
char GetRandomCharacter(enCharType CharType)
{
    switch(CharType)
    {
        case enCharType::SamallLetter:
        {
            return char(RandomNumber(97,122));
        }
        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65,90));
        }
       case enCharType::SpecialCharacter:
        {
            return char(RandomNumber(32,47));
        }
            case enCharType::digit:
        {
            return char(RandomNumber(48,57));
        }
    }
    return '\0';
}

int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(enCharType::SamallLetter) << endl;      // Random lowercase letter.
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;     // Random uppercase letter.
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;  // Random special character.
    cout << GetRandomCharacter(enCharType::digit) << endl;             // Random digit.
    return 0;
}