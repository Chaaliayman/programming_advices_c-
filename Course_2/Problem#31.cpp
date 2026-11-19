#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string  Message )
{
    int Number = 0;
    do{
        cout<<Message;
        cin>>Number;
    }while(Number < 0);
    return Number;
}
void swap(int *a , int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void FillArrayWith1toN(int arr[100], short arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = i + 1;
    }
}
int RandomNumber(int From,int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void ShuffleArray(int arr[100], int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        swap(&arr[RandomNumber(1,arrLength) - 1] ,
          &arr[RandomNumber(1,arrLength) - 1]);
    }
}
void PrintArray(int arr[100], int arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");
    FillArrayWith1toN(arr, arrLength);
    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, arrLength);
    ShuffleArray(arr,arrLength);
    cout << "\nArray elements after shuffle:\n";
    PrintArray(arr,arrLength);
    return 0;
}
