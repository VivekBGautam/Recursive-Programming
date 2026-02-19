#include<stdio.h>
#include<iostream>
using namespace std;

void DisplayyArr(int Brr[], int iSize)
{
    int i = 0;

    while(i < iSize)
    {
        cout<<Brr[i]<<"\n";
        i++;
    }
}

int main()
{
    int Arr[] = {10,20,30,40,50};

    DisplayyArr(Arr,5);

    return 0;
}