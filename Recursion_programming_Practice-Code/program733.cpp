#include<stdio.h>
#include<iostream>
using namespace std;

int DisplayyArr(int Brr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    while(i < iSize)
    {
        iSum = iSum + Brr[i];
        i++;
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