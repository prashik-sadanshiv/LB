// Encapsulation due to use characterisics and behaviours in one class together...

#include<iostream>

using namespace std;

class Arithmatic
{
    public:         // access specifier 
        float No1;    // characteristics
        float No2;    // characteristics
    
        Arithmatic(float A, float B)    // parameterize constructor
        {
            No1 = A;
            No2 = B;
        }

        float Addition()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            float Ans;                // local variable
            Ans = No1 + No2;        // business logic
            return Ans;             // return the addition result
        }
};


int main()
{
    Arithmatic aobj1(10.3f, 11.4f);        // object creation for parameterize constructor.... 
    Arithmatic aobj2(20.5f, 21.2f);        // object creation for parameterize constructor.... 

    cout<<aobj1.Addition()<<"\n";    // don't need to pass parameter in this function
    cout<<aobj2.Addition()<<"\n";    // don't need to pass parameter in this function

    return EXIT_SUCCESS;
}