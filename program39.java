
// Thired Approch 3rd now in finalies mode... why we create static method in Arithmatic class.
// if we create the object of this Arithmatic class in main class to remove static method

import java.util.Scanner;


class program39
{

    public static void main(String A[])
    {
        Scanner scanner = null;
        Arithmatic arithmatic = null;

        scanner = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter 1st Number: ");
        iValue1 = scanner.nextInt(); 
        
        System.out.println("Enter 2nd Number: ");
        iValue2 = scanner.nextInt();

        arithmatic = new Arithmatic();
        iResult = arithmatic.Addition(iValue1, iValue2);             // Business Logic

        System.out.println("Additions is: "+iResult);

      
    }
}

class Arithmatic
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}
