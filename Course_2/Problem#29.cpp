#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int From,int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void array(int arr[100],int &len){
    cout << "\nEnter number of elements:\n";
    cin >> len;
    for(int i = 0; i < len;i++)
    {
        arr[i]=RandomNumber(1,100);
    }
}
void printofarray(int arr[100],int len)
{
     for(int i = 0; i < len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
bool isprimeandnotprime(int number)
{
    if(number < 2)
    {
        return false;
    }
    for(int i = 2; i < number;i++)
    {
        if(number % i == 0)
            return false;
    }
    return true;
}
void copyOfarray2(int arr[100],int arr2[100],int len,short &Len2)
{
    for(int i = 0; i < len;i++)
    {
        if(isprimeandnotprime(arr[i]))
        {
            arr2[Len2] = arr[i];
            Len2++;
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int Number2[100];
    int len;
    short Len2 = 0;
    array(Number,len);
    copyOfarray2(Number,Number2,len,Len2);
    cout << "\nArray 1 elements:\n";
    printofarray(Number,len);
    cout << "\nArray 2 elements:\n";
    printofarray(Number2,Len2);
    return 0;
}