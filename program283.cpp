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
    // Dyanmic object creation in Generic

    Arithmatic *aobj = new Arithmatic(10, 11);

    cout<<aobj->Addition()<<endl;
    cout<<aobj->Substraction()<<endl;

    
    return EXIT_SUCCESS;
}