// Input  : 7891
// Output : 1

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        cout<<iNo<<"\n";
        CountDigits(iNo);
    }   

    return iCount;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    iRet = CountDigits(iValue);
    
    // cout<<"Number of digits are : "<<iRet<<"\n";
    return 0;
}