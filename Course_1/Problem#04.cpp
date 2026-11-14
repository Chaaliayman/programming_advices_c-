#include <iostream>
using namespace std;
struct stinfo
{
    short age;
    bool hasDrivingLicense;
};
stinfo asktheuser()
{
    stinfo info;
    cout<<"please enter age : ";
    cin>>info.age;

    cout<<"Do you have driver license : ";
    cin>>info.hasDrivingLicense;

    return info;
}
bool IsAccepted(stinfo info)
{
    return (info.age >= 21 && info.hasDrivingLicense);
}
void print_result(stinfo info)
{
    if(IsAccepted(info))
        cout<<"Hired";
    else
        cout<<"Rejected";
}
int main()
{
    print_result(asktheuser());
    return 0;
}
