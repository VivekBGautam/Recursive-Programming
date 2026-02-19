#include<stdio.h>
#include<iostream>
using namespace std;

int DisplayyArr(int Brr[], int iSize)
{
    static int i = 0;
    static int iSum = 0;

    if(i < iSize)
    {
        iSum = iSum + Brr[i];
        i++;
        DisplayyArr(Brr, iSize);
    }
    
    return iSum;
}

int main()
{
    int iRet = 0;
    int Arr[] = {10,20,30,40,50};

    iRet = DisplayyArr(Arr,5);

    cout<<"Summation of elements of array is : "<<iRet<<"\n";

    return 0;
}