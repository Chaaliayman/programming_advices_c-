#include <iostream>
using namespace std;
int read_Numbers(int &Numbers1,int &Numbers2,int &Numbers3)
{
    cout<<"Please enter Number 1 ?";
    cin>>Numbers1;

    cout<<"Please enter Number 2 ?";
    cin>>Numbers2;

    cout<<"Please enter Number 3 ?";
    cin>>Numbers3;
}
int  Max_of_3_Numbers(int Numbers1,int Numbers2,int Numbers3)
{
    if(Numbers1 > Numbers2 && Numbers1 > Numbers3)
        return Numbers1;
    else if(Numbers2 > Numbers3 )
        return Numbers2;
    else
        return Numbers3;

}
int print_result_Max(int Max)
{
    cout<<"\n The Maximum Number is: "<<Max;
}
int main()
{
    int Numbers1 , Numbers2,Numbers3;
    read_Numbers(Numbers1,Numbers2,Numbers3);
    print_result_Max(Max_of_2_Numbers(Numbers1,Numbers2,Numbers3));
}