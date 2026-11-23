#include <iostream>
using namespace std ;
int ReadPositiveNumber()
{
    int number;
        cout<<"\nPlease enter a number? ";
        cin>>number;
    return number;
}
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
void InputUserNumbersInArray(int arr[100], int &arrLength)
{
    bool trueandfalse = true;
    do{
        AddArrayElement(ReadPositiveNumber( ),arr,arrLength); 
        cout << "\nDo you want to add more numbers? [0]:No,[1]:yes? ";
        cin>>  trueandfalse;
    }while(trueandfalse );
}
void printofarray(int arr[100],int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100];
    int arrLength = 0;
    InputUserNumbersInArray(arr,arrLength);
    cout << "\nArray Length: " << arrLength << endl;
    cout << "Array elements: ";//<<printofarray(arr, arrLength);
    printofarray(arr, arrLength);      
    return 0;
}