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
void printofarray(int arr[100],int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int chechPosition(int arr[100] , int arrLength,int Number)
{
    for(int i = 0 ; i < arrLength;i++)
    {
        if(arr[i] == Number)
        return i;
    }
    return -1;
}
int chechinorder(int arr[100],int arrLength,int Number)
{
    int counter = 1;
    for(int i = 0 ; i < arrLength;i++)
    {
        if(Number == arr[i])
        {
            return counter;
        }
        counter++;
    }
    return -1;
}
void printorder(int arr[100],int arrLength,int Number)
{
    int order = chechinorder(arr,arrLength,Number);
    if(order == -1 )
    {
        cout<<endl;
    }
    else{
        cout<<"\nNumber found at position: "<<order<<endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int arrLength;
    FillArrayWithRandomNumbers(Number,arrLength);
     cout << "\nArray elements:\n";
    printofarray(Number, arrLength);
    int searchPosition = ReadPositiveNumber();  
    int Position = chechPosition(Number,arrLength ,searchPosition);
    cout<<"Number you are looking for is : "<<searchPosition;
    if(Position == -1)
    {
        cout << "\nNumber is not found : -(";
    }
    else{
        cout << "\nNumber found at position: " << Position;
    }
    printorder(Number, arrLength, searchPosition);
    return 0;
}