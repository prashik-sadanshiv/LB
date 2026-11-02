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

        double Substraction()              // function/ Method do not need to pass parameter due to object, we can use directly
        {
            double Ans;                // local variable
            Ans = No1 - No2;        // business logic
            return Ans;             // return the addition result
        }
       
};


int main()
{

    // Dyanmic object creation in static class
   
    // Arithmatic *aboj =  aobj = new Arithmatic(11, 10); 
    
    Arithmatic *aobj = NULL;           
    aobj = new Arithmatic(11, 10);  

    cout<<"Addtion is: "<<aobj->Addition()<<endl;
    cout<<"Substraction is: "<<aobj->Substraction()<<endl;

    return EXIT_SUCCESS;
}