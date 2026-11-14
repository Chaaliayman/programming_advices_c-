#include <iostream>
using namespace std;
int read_Numbers(int &Numbers1,int &Numbers2)
{
    cout<<"Please enter Number 1 ?";
    cin>>Numbers1;

    cout<<"Please enter Number 2 ?";
    cin>>Numbers2;
}
int  Max_of_2_Numbers(int Numbers1,int Numbers2)
{
    if(Numbers1 > Numbers2)
        return Numbers1;
    else
        return Numbers2;
}
int print_result_Max(int Max)
{
    cout<<"\n The Maximum Number is: "<<Max;
}
int main()
{
    int Numbers1 , Numbers2;
    read_Numbers(Numbers1,Numbers2);
    print_result_Max(Max_of_2_Numbers(Numbers1,Numbers2));
}