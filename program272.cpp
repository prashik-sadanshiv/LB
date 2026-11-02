// Generic code.... (don't initialize any variable in case of generica coding..)

#include<iostream>

using namespace std;

// This is generic function which is not initialized with any value
template <class T>
T Addition(T No1, T No2)
{
    T Ans;
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