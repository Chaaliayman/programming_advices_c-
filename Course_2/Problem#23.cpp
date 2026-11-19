#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int RandomNumber(int from , int to)
{
    int Random = rand() % (to - from + 1) + from;
    return Random;
}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength; 
    for(int i = 0;i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void PrintArray(int arr[100], int arrLength)
{
    for(int i = 0;i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int lenght ;
    FillArrayWithRandomNumbers(arr,lenght);
    cout << "\nArray Elements: ";

    PrintArray(arr,lenght);
    return 0;
}
