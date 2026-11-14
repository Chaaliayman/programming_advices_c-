#include <iostream>
using namespace std;
struct stinfo
{
    short age;
    bool hasDrivingLicense;
    bool hasRecommendatin;
};
stinfo asktheuser()
{
    stinfo info;
    cout<<"please enter age : ";
    cin>>info.age;

    cout<<"Do you have driver license : ";
    cin>>info.hasDrivingLicense;

    cout<<"Do you have  Recommendatin :";
    cin>>info.hasRecommendatin;

    return info;
}
bool IsAccepted(stinfo info)
{
    if(info.hasRecommendatin)
    {
        return true;
    }
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
}