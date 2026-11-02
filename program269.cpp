// Generic code.... (don't initialize any variable in case of generica coding..)

#include<iostream>
// #include<stdlib.h>

using namespace std;

// This is generic function which is not initialized with any value
double Addition(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}


int main()
{

    double iValue1 = 0.0, iValue2 = 0.0;        // double use 8 digit's after decimal
    double iRet = 0.0;

    cout<<"Enter First Number: \n";
    cin>>iValue1;

    cout<<"Enter Secound NUmber: \n";
    cin>>iValue2;

    iRet = Addition(iValue1, iValue2);

    cout<<"Addition is: "<<iRet<<"\n";
    
    return EXIT_SUCCESS;
}