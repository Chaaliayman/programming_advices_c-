#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
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
void AddArrayElement(int number , int arr[100] , int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = number;
}
void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        AddArrayElement(arrSource[i],arrDestination,arrDestinationLength);
    }
}
void printofarray(int arr[100] , int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = 0;
 
    int arr2[100];         
    int arr2Length = 0;
    FillArrayWithRandomNumbers(arr,arrLength);
    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);
    
    cout << "\nArray 1 elements:\n";
    printofarray(arr2, arr2Length);
    cout << "\nArray 2 elements after copy:\n";
    printofarray(arr2, arr2Length);
}
