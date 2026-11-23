#include<ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArray(int arr[100],int &Length)
{
    
    cout << "\nEnter number of elements:\n";
    cin >> Length;
    for(int i = 0; i < Length; i++)
    {
        arr[i] = RandomNumber(-100,100);
    }
}

void printofarray(int arr[100] , int Length)
{
    for(int i = 0; i < Length;i++)
    {    
       cout<<arr[i]<<" ";
    }

}
int Positive_Numbers_count(int arr[100], int Length)
{
    int counter = 0;
     for(int i = 0; i < Length;i++)
    {    
       if(arr[i] >= 0)
        counter++;
    }
    return counter;
}
int main()
{
    srand((unsigned)time(NULL));
    
    int arr[100];
    int Length;
    FillArray(arr,Length);   
    cout << "\nArray Elements: ";
    printofarray(arr,Length);
    cout<<"\nPositive Numbers count is : ";
    cout<<Positive_Numbers_count(arr,Length);
    return 0;   
}