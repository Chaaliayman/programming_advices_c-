#include <iostream>
using namespace std;
string read_name()
{
    string name;
    cout<<"enter please your name :";
    getline(cin,name);
    return name;
}
void print_name(string name)
{
    cout<<"your name is "<<name;
}
int main()
{
    print_name(read_name());
    return 0;
}
