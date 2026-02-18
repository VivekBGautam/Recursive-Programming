
#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;


    if(iCnt <= (iNo/2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfect(iNo);
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{ 
    int iValue = 0;
    bool Ret = 0;

    cout<<"Enter the number :\n";
    cin>>iValue;

    Ret = CheckPerfect(iValue);

    if(Ret == true)
    {
        cout<<iValue<<" : Is perfect number \n";
    }
    else
    {
        cout<<iValue<<" : Is Not perfect number \n";
    }
    
    return 0;
}