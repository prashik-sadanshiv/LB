
// Encapsulation due to characterisics and behaviours

#include<iostream>

using namespace std;

class Arithmatic
{
    public:         // access specifier 
        int No1;    // characteristics
        int No2;    // characteristics
    
        Arithmatic(int A, int B)    // parameterize constructor
        {
            No1 = A;
            No2 = B;
        }

        int Addition()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            int Ans;                // local variable
            Ans = No1 + No2;        // business logic
            return Ans;             // return the addition result
        }
};


int main()
{
    Arithmatic aobj1(10, 11);        // object creation for parameterize constructor.... 
    Arithmatic aobj2(20, 21);        // object creation for parameterize constructor.... 

    cout<<aobj1.Addition()<<"\n";    // don't need to pass parameter in this function
    cout<<aobj2.Addition()<<"\n";    // don't need to pass parameter in this function

    return EXIT_SUCCESS;
}