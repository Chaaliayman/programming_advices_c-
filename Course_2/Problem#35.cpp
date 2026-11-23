#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber()
{
    int Number ; 
    cout << "\nPlease enter a number to search for?\n";  
    cin >> Number;           
    return Number;
}
int RandomNumber(int From , int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void FillArrayWithRandomNumbers(int arr[100],int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void printofarray(int arr[100] , int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
bool    chechNumber(int arr[100],int arrLength,int Number)
{
    for(int i = 0; i < arrLength; i++)
    {
        if(arr[i] == Number)
        {
            return true;
        }
     }
    return false;
}
void printCheckNumber(int arr[100],int arrLength,int Number)
{
    int Numbe = chechNumber(arr,arrLength,Number);
    if(Numbe == true)
        cout<<"Yes it is found :-)\n";
    else
        cout << "No, The number is not found :-(\n";
}
int main()
{
    int Number[100];
    int arrLength;
    FillArrayWithRandomNumbers(Number,arrLength);
    cout << "\nArray 1 elements:\n";
    printofarray(Number,arrLength);
    int Number1 = ReadPositiveNumber();
    cout << "\nNumber you are looking for is: " << Number1 << endl;
    printCheckNumber(Number, arrLength, Number1);
    return 0;
}