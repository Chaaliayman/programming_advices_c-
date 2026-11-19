#include <iostream>
#include <ctime>
#include <cstdlib>
//#include <cstring>
using namespace std;

int RandomNumber(int From, int To)
{
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void array(int arr[100],int &len){
    cout << "\nEnter number of elements:\n";
    cin>>len;        
    for(int i = 0; i < len;i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}
void printofarray(int arr[100],int len)
{
    for(int i = 0; i < len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void copyarray(int arr[100],int arr2[100],int len)
{
    for(int i = 0; i < len;i++)
    {
        arr2[i] = arr[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    int len;
    array(Number, len);
    int Number2[100];
    
    copyarray(Number, Number2, len);
    
    cout << "\nArray 1 elements:\n";
    printofarray(Number, len);
    
    cout << "\nArray 2 elements after copy:\n";
    printofarray(Number2, len);
    return 0;
}