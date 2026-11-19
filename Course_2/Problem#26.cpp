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
int sumofarray(int arr[100],int arrLength)
{
    int sum = 0;
    for(int i = 0; i < arrLength;i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int arrlength;
    
    FillArrayWithRandomNumbers(Number,arrlength);
    cout << "\nArray Elements: ";
    PrintArray(Number,arrlength);
    cout<<"\nSum of all number is : "<<sumofarray(Number,arrlength);

    return 0;
}