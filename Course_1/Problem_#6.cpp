#include<iostream>
using namespace std;
struct stinfo
{
    string firstname;
    string  lastname;
};
stinfo readinfo()
{
    stinfo info;
    
    cout<<"enter a first name : ";
    getline(cin,info.firstname);

    cout<<"enter a list name :";
    getline(cin,info.lastname);

    return info;
}
void print(stinfo info)
{
    cout<<info.firstname + " "+ info.lastname;
}
int main()
{
    print(readinfo());
}