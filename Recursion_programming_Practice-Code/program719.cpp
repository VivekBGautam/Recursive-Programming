#include<stdio.h>
#include<iostream>
using namespace std;

int CountCapital(char * str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
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

    iRet = CountCapital(Arr);

    printf("Capital count is : %d\n",iRet);

    return 0;
}