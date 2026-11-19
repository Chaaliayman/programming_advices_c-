#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int To , int From)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void array(int arr[100] , int &len)
{
    cout << "\nEnter number of elements:\n";
    cin>>len;  
    for(int i = 0; i < len; i++)
    {
        arr[i]= RandomNumber(1,100);
    }
}
void printofarray(int arr[100] , int len)
{
    for(int i = 0; i < len; i++)
    {

        cout<<arr[i]<<" ";
    }
}
void   printofarray2(int arr2[100] , int len )
{
    for(int i = 0; i < len; i++)
    {
        cout<<arr2[i]<<" ";
    }
}
void SumOf2Arrays(int arr[100] , int arr2[100], int arrSum[100], int len)
{
     for(int i = 0; i  < len;i++)
    {
        arrSum[i]= arr[i] + arr2[i];
    } 
}
int main()
{
    srand((unsigned)time(NULL));
    int Number1[100];
    int Number2[100];
    int Number3[100];
    int len;
    array(Number1,len);
    array(Number2,len);
    cout << "\nArray 1 elements:\n";
    printofarray(Number1,len);
    cout << "\nArray 2 elements:\n";
    SumOf2Arrays(Number1, Number2, Number3, len);
    printofarray2(Number2,len);
    cout << "\nSum of array1 and array2 elements:\n";
    printofarray2(Number3,len);
    return 0;
}
