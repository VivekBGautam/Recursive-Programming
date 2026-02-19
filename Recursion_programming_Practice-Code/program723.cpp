#include<stdio.h>
#include<iostream>
using namespace std;

void DisplayyArr(int Brr[], int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        cout<<Brr[i]<<"\n";
        i++;
    }

    DisplayyArr(Brr,iSize);
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    DisplayyArr(Arr,5);

    return 0;
}