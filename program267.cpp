

#include<iostream>
// #include<stdlib.h>

using namespace std;

float Addition(float iNo1, float iNo2)
{
    float iAns = 0.0f;
    iAns = iNo1 + iNo2;
    return iAns;
}


int main()
{

    float iValue1 = 0, iValue2 = 0;
    float iRet = 0;

    cout<<"Enter First Number: \n";
    cin>>iValue1;

    cout<<"Enter Secound NUmber: \n";
    cin>>iValue2;

    iRet = Addition(iValue1, iValue2);

    cout<<"Addition is: "<<iRet<<"\n";
    
    return EXIT_SUCCESS;
}