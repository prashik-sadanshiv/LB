// Encapsulation due to use characterisics and behaviours in one class together...

#include<iostream>

using namespace std;

class Arithmatic
{
    public:         // access specifier 
        double No1;    // characteristics
        double No2;    // characteristics
    
        Arithmatic(double A, double B)    // parameterize constructor
        {
            No1 = A;
            No2 = B;
        }

        double Addition()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            double Ans;                // local variable
            Ans = No1 + No2;        // business logic
            return Ans;             // return the addition result
        }
};


int main()
{
    Arithmatic aobj1(10.3, 11.4);        // object creation for parameterize constructor.... 
    Arithmatic aobj2(20.5, 21.2);        // object creation or parameterize constructor.... 

    cout<<aobj1.Addition()<<"\n";    // don't need to pass parameter in this function
    cout<<aobj2.Addition()<<"\n";    // don't need to pass parameter in this function

    return EXIT_SUCCESS;
}