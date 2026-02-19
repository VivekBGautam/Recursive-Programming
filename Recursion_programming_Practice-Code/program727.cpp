#include<stdio.h>
#include<iostream>
using namespace std;

void strDisplay(char * str)
{
    if(*str != '\0')
    {
        cout<<*str<<"\n";
        str++;
        strDisplay(str);
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^'\n]s",Arr);

    strDisplay(Arr);

    return 0;
}