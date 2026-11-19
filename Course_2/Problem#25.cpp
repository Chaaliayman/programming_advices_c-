#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int RandomNumber(int from , int to)
{
    int Random = rand() % (to - from + 1) + from;
    return Random;
} 
void FillArrayWithRandomNumbers(int array[100] , short &arrLength)
{
    for(int i = 0; i < arrLength;i++)
    {
        array[i] = RandomNumber(1,100);
    }
}
void printarray(int array[10] , short arrLength)
{
    for(int i = 0;i < arrLength;i++)
    {
        cout<<array[i]<<" ";
    }
}
int minofarray(int array[100] , short arrlength)
{
    int min = array[0];
    for(int i = 0;i < arrlength;i++)
    {
        if(min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}
int main()
{
    srand((unsigned)time(NULL));
    int Number[100];
    short arrlength;
    cout << "Enter array length: ";
    cin>>arrlength; 
    FillArrayWithRandomNumbers(Number,arrlength);
    cout << "\nArray elements: ";
    printarray(Number,arrlength);
    cout<<endl;
   cout<<"minofarray  "<<minofarray(Number,arrlength);   

    cout<<"minofarray  "<<minofarray(Number,arrlength);   
    return 0;
}
