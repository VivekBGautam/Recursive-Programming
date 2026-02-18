// Input  : 7891
// Output : $

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;      // iSum = iSum + iNo % 10  without iDigits
        SumDigits(iNo / 10);
    }   

    return iSum;
}
int main()
{ 
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    iRet = SumDigits(iValue);
    cout<<"Sum of digits are : "<<iRet<<"\n";
    return 0;
}