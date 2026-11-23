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
        arr[i] = RandomNumber(1,100);
    }
}

void printofarray(int arr[100] , int Length)
{
    for(int i = 0; i < Length;i++)
    {    
       cout<<arr[i]<<" ";
    }

}
int Even_Numbers_count(int arr[100], int Length)
{
    int counter = 0;
     for(int i = 0; i < Length;i++)
    {    
       if(arr[i] % 2 == 0)
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
    cout<<"\nEven Numbers count is : ";
    cout<< Even_Numbers_count(arr,Length);
    
}