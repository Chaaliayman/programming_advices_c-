#include <iostream>
using namespace std;
enum passandfile{pass=1,file = 2};
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
    return  Mark1 + Mark2 + Mark3;
}
float Average_of_3_Marks(int Mark1,int Mark2,int Mark3)
{
        return printof3number(Mark1,Mark2,Mark3) / 3;
}
passandfile  chechpassandfile(float average)
{
    if(average  >= 50)
        return passandfile::pass;
    else 
    return passandfile::file; 
}
void print_total(float Average)
{
     cout << "\n Your Average is: " << Average << endl;
    if(chechpassandfile(Average) == passandfile::pass)
        cout<<"\nYou Passed";
    else
        cout<<"\nYou Failed";
}
int main()
{
    int Mark1, Mark2, Mark3;   
    readNamberMark(Mark1, Mark2, Mark3);
    print_total(Average_of_3_Marks(Mark1, Mark2, Mark3));
}