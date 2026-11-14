#include<iostream>
using namespace std;
enum enpassfile{pass= 1,file=2};
int read_Mark()
{
    int mark;
    cout<<"please enter your mark :";
    cin>>mark;
    return mark;
} 
enpassfile checkMark(int mark)
{
    if(mark >= 50)
    return enpassfile::pass;
    else
        return enpassfile::file;
}
void printMArk(int mark)
{
    if(checkMark(mark) == enpassfile::pass)
    {
            cout<<"\nyou Pass\n";       
    }
    else
        cout<<"\nfile\n";
}
int main()
{
    printMArk(read_Mark());
}