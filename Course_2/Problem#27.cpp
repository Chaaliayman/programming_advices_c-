#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
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
    for(int i = 0; i < arrLength;i++)
    {
        cout<<arr[i]<<" ";
    }
}
float avrageofarray(int arr[100],int arrLength)
{
    int av = 0;
    for(int i = 0; i < arrLength;i++)
    {
        av += arr[i];
    }
    return (float)av / arrLength;
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int arrlength;
    
    FillArrayWithRandomNumbers(Number,arrlength);
    cout << "\nArray Elements: ";
    PrintArray(Number,arrlength);
    cout<<"\navrage  of all number is : "<<avrageofarray(Number,arrlength);

    return 0;
}