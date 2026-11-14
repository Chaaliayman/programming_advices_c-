#include <iostream>
using namespace std;
short readage()
{
    short age;
    cout<< "Please enter your Age ? "<<endl;
    cin>>age;
    return age;
}
short checkAge(short age)
{
    if(age >= 18 && age <= 45)
        cout<<"Valid age";
    else
        cout<<"Invalid age";
}
int main()
{
    checkAge(readage( ));
}