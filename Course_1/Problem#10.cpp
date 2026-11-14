#include <iostream>
using namespace std;
int readNamberMark(int &Mark1,int &Mark2,int &Mark3)
{
    cout<<"please enter your mark : ";
    cin>>Mark1;

    cout<<"please enter your mark2 : ";
    cin>>Mark2;

    cout<<"please enter your mark2 :";
    cin>>Mark3;
}
int printof3number(int Mark1,int Mark2,int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}
float  Average_of_3_Marks(int Mark1,int Mark2,int Mark3)
{           

    return (float)printof3number(Mark1,Mark2,Mark3) / 3; 
}
void print_result(int Average)
{
    cout<<"average is "<<Average;
}
int main()
{
    int Mark1,Mark2,Mark3;
    readNamberMark(Mark1,Mark2,Mark3);
    print_result(Average_of_3_Marks(Mark1,Mark2,Mark3));

}