#include <iostream>
using namespace std;
struct namber
{
    int number;
};
namber read_namber()
{
    namber numb;
    cout<<"entre number : ";
    cin>>numb.number;
    return numb;
}
int  halfnumber(int num )
{   
    return num / 2;
}

int main()
{
    namber numb = read_namber();
    cout<<halfnumber(numb.number);
}