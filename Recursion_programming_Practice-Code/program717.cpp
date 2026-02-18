#include<stdio.h>
#include<iostream>
using namespace std;

int strlenX(char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    iRet = strlenX(Arr);

    printf("length of string is : %d\n",iRet);

    return 0;
}