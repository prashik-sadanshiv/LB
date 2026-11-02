// Encapsulation due to use characterisics and behaviours in one class together...

#include<iostream>

using namespace std;

template <class T>          // this Syntax is use to make class Generic, all function within class will become generic
class Arithmatic
{
    public:             // access specifier 
        T No1;    // characteristics
        T No2;    // characteristics
    
        Arithmatic(T A, T B)    // parameterize constructor
        {
            No1 = A;
            No2 = B;
        }


        T Addition()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            T Ans;                // local variable
            Ans = No1 + No2;        // business logic
            return Ans;             // return the addition result
        }

        T Substraction()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            T Ans;                // local variable
            Ans = No1 - No2;        // business logic
            return Ans;             // return the addition result
        }
        
};


int main()
{
    
    Arithmatic aobj1(10.3, 11.4);        // In this line of code we aspect the error: missing template arguments befor 'aobj1'
                                        // Arithmatic aobj1(10.3, 11.4); 

    cout<<aobj1.Addition()<<"\n";    // don't need to pass parameter in this function
    
    cout<<aobj1.Substraction()<<"\n";    // don't need to pass parameter in this function
    
    return EXIT_SUCCESS;
}