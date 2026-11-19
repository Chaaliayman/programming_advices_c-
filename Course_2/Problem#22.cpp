#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
    int Number;
    do{
        cout<<Message;
        cin>>Number;
    }while(Number < 0);
    return Number;
}
void ReadArrayElements(int n[] ,short lenght){
    
    cout << "\nEnter array elements: \n";
    for(int i = 0;i < lenght;i++) 
    {
        cout<<"Element ["<<i + 1<<"] :";
        cin>> n[i];
    }
}
void PrintArrayElements(int n[],short lenght)
{
    cout<< "\nOriginal array: ";
    for(int i = 0;i < lenght;i++)
    {
        cout<<n[i]<<" ";
    }
}
int checknumber(int n[] , int lenght , int searchNumber)
{
    int counter =  0;
    for(int i = 0;i < lenght;i++)
    {
        if(searchNumber == n[i])
            counter++;
    }
    return counter;
}
int main()
{
    short lenght = ReadPositiveNumber("enter the lenght of array :");
    int number[100];
    ReadArrayElements(number,lenght);
    PrintArrayElements(number,lenght);
    int searchNumber =ReadPositiveNumber("\nEnter the number you want to check: ");
    int counter = checknumber(number,lenght,searchNumber);
    cout<<searchNumber<< " is repeated " << counter << " time(s)" << endl;
    return 0;
}