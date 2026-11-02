// Encapsulation due to use characterisics and behaviours in one class together...

#include<iostream>

using namespace std;

template <class T>          // this Syntax is use to make class Generic, all function within class will become generic
class Arithmatic
{
    public:             // access specifier 
        T No1;    // characteristics
        T No2;    // characteristics
    
        Arithmatic(T A, T B);   // parameterize constructor

        T Addition();              // function/ Method do not need to pass parameter due to object, we can use directly
        T Substraction();             // function/ Method do not need to pass parameter due to object, we can use directly
        
};

template <class T>
Arithmatic :: Arithmatic(T A, T B)    // ERROR
{
    No1 = A;
    No2 = B;
}

template <class T>
T Arithmatic :: Addition()              // ERROR
{
    T Ans;                // local variable
    Ans = No1 + No2;        // business logic
    return Ans;             // return the addition result
}

template <class T>
T Arithmatic :: Substraction()              //ERROR
{
    T Ans;                // local variable
    Ans = No1 - No2;        // business logic
    return Ans;             // return the addition result
}


// this main is generic and dynamic
int main()
{   
    // Dyanmic object creation in Generic

    // Arithmatic <int> *aobj = new Arithmatic(10, 11);    // not giving any error check with this line of code

    // Arithmatic <int> *aobj = new <int>Arithmatic(10, 11);   // this line gives error

    Arithmatic <int> *aobj = new Arithmatic<int>(10, 11);

    cout<<aobj->Addition()<<endl;
    cout<<aobj->Substraction()<<endl;

    
    return EXIT_SUCCESS;
}