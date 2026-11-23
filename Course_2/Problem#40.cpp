using namespace std;
#include <iostream>
int ReadPositiveNumber()
{
    int number;
    do{
        cout<<"Please enter a number? ";
        cin>>number;
    }while(number < 0);
    return number;
}
void FillArrayWithRandomNumbers(int arr[100] , int &arrLength)
{
//    arrLength = ReadPositiveNumber("How many elements do you want in the array? ");
    for(int i = 0; i < arrLength;i++)
    {
        arr[i] = ReadPositiveNumber();
    }
}
bool  IsNumberInArray(int arr[100],int Number , int arrLength )
{
    for(int i = 0; i < arrLength;i++)
    {
        if(arr[i] == Number)
        return true;
    }
    return false;
}
void CopyArrayTow2(int arrSource[100],int arrDestination[100],int arrLength,int &arrDestinationLength)
{
    arrDestinationLength = 0;
    for(int i = 0; i < arrLength;i++)
    {
        if (!IsNumberInArray(arrDestination,arrSource[i],arrDestinationLength))
        {
            arrDestination[arrDestinationLength] = arrSource[i];
            arrDestinationLength++;
        }
    }
}
void printofarray(int arr[100] , int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int     Number1[100] ;
    int     arrLength1 = 5;
    int     Number2[100];
    FillArrayWithRandomNumbers(Number1,arrLength1);

    int arrLength2 = 0;

    CopyArrayTow2(Number1, Number2, arrLength1, arrLength2);
    cout << "\nArray 1 elements:\n";
    printofarray(Number1,arrLength1);
    cout << "\nArray 2 elements after copy:\n";
    printofarray(Number2,arrLength2);
    return 0;
}