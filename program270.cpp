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

float Addition(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(10.5f,11.6f)<<"\n";
    cout<<Addition(10.3,11.45)<<"\n";

    return EXIT_SUCCESS;
}