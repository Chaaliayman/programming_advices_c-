#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do{
        cout<<Message;
        cin>>Number;
    }while(Number <= 0);
    return Number;
} 
int RandomNumber(int From , int To)
{   
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void FillArrayWithRandomNumbers(int arr[100] , int &arrLength)
{
    arrLength = ReadPositiveNumber("\nEnter number of elements:\n");
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    for(int i = 0; i < arrLength;i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
}
void printofarray(int arr[100],int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int Number2[100];

    int len;

    FillArrayWithRandomNumbers(Number,len);
    cout<<"Array 1 elements \n";
    printofarray(Number,len);
     CopyArrayInReverseOrder(Number,Number2 ,len);

    cout << "\nArray 2 elements after copying array 1 in reversed order:\n";
    printofarray(Number2, len); 
    return 0;
}