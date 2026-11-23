#include <iostream>
using namespace std;
int ReadPositiveNumber()
{
    int number;
    do{
        cout<<"Please enter a number? ";
        cin>>number;
    }while(number < 0);
    return number;
}
void FillArrayWithRandomNumbers(int arr[100] , int &arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = ReadPositiveNumber();
    }
}
bool IsPalindromeArray(int arr[100] , int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        if(arr[i] != arr[arrLength - i - 1])
            return false;
    }
    return true;
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
    int arrLength = 6;
    FillArrayWithRandomNumbers(arr,arrLength);
    cout << "\nArray Elements:\n";
    printofarray(arr,arrLength);
    if(IsPalindromeArray(arr, arrLength)) 
    {
        cout<<"\nYes array is Palindrome\n";
    }  
    else{
           cout << "\nNO array is NOT Palindrome\n";
    }
    return 0;
}
