// Input  : 5
// Output : 1   2   3   4   5
// final

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >=1)
    {
        Display(iNo - 1 );
        cout<<iNo<<"\t";
    }
    else
    {
        cout<<"\n";
    }
}
int main()
{ int iValue = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    Display(iValue);
    return 0;
}