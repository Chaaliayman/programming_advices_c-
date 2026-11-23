#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
enum enPrimNotPrime{
    Prime = 1 ,
    NotPrime = 2
};
//bool enPrimNotPrime(int arr[100], int arrLength)
//{
    //if(arr == 2)
  //  if()
//}
int RandomNumber(int From , int to)
{
    int Random = rand() % (to - From + 1) + From;
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
void AddArrayElement(int Number ,int arr[100],int &arrLength)
{
    arrLength++;
    arr[arrLength - 1] = Number;
}
int	ft_is_prime(int nb)
{
    if(nb < 0)
    return enPrimNotPrime::NotPrime;
    for(int i = 2; i <= nb / 2;i++)
    {
        if(nb % i == 0)
        {
            return enPrimNotPrime::NotPrime;
        }
    }
    return enPrimNotPrime::Prime;
}
void CopyArrayUsingAddArrayElement(int arrSource[100],int arrDestination[100],int &arrDestinationLength,int arrLength)
{
     
    for(int i = 0; i <= arrLength / 2;i++)
    {
        if(ft_is_prime(arrSource[i]) ==  enPrimNotPrime::Prime)
        {
            AddArrayElement(arrSource[i],arrDestination,arrDestinationLength);
        }
    }
}
void printofarray(int arr[100] , int arrLength)
{
    for(int i = 0; i < arrLength;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    srand((unsigned)time(NULL));
    int     Number1[100];
    int     Number2[100];
    int     arrLength1 = 0;
    int     arrLength = 0;

    FillArrayWithRandomNumbers(Number1,arrLength1);
    CopyArrayUsingAddArrayElement(Number1, Number2, arrLength, arrLength1);
    cout << "\nArray 1 elements:\n";
    printofarray(Number1,arrLength1);
    cout << "\nArray 2 elements after copy:\n";
    printofarray(Number2,arrLength);
    return 0;
}