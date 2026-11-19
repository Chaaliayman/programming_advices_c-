#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int from , int to)
{
    int Random = rand() % (to - from + 1) + from;
    return Random;
}
void    FillArrayWithRandomNumbers(int arr[100] , int &arrLength)
{
    
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void PrintArray(int arr[100],int arrLength)
{
    for(int i = 0;i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int maxofaray(int arr[100],int arrLength)
{
    int max = arr[0];
    for(int i = 0;i < arrLength;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int arrLength;
    cout << "Enter array length: ";
    cin>>arrLength;
    FillArrayWithRandomNumbers(Number,arrLength);
    cout << "\nArray elements: ";
    PrintArray(Number,arrLength);

    cout << "\nMax number: " << maxofaray(Number, arrLength);
    return 0;
}
