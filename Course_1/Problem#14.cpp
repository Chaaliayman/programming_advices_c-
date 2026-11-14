#include <iostream>
using namespace std;
int read_Numbers(int &Numbers1,int &Numbers2)
{
    cout<<"Please enter Number 1 ?";
    cin>>Numbers1;

    cout<<"Please enter Number 2 ?";
    cin>>Numbers2;
}
void Swap_Numbers(int &Numbers1 , int &Numbers2)
{
    int tmp = Numbers1;
    Numbers1 = Numbers2;
    Numbers2 = tmp;
}
int print_result(int Numbers1 , int Numbers2)
{
    cout<<"\nnumber 1 = \n"<<Numbers1<<endl;
    cout<<"\nnumber 2 = \n"<<Numbers2<<endl;
}
int main ()
{
    int Numbers1 , Numbers2;
    read_Numbers( Numbers1 , Numbers2);
    Swap_Numbers( Numbers1 , Numbers2);   
    print_result( Numbers1 , Numbers2);
}