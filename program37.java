
import java.util.Scanner;

class Arithmatic
{
    public static int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

class program37
{

    public static void main(String A[])
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0, iResult = 0;


        System.out.println("Enter 1st Number: ");
        iValue1 = scanner.nextInt(); 
        
        System.out.println("Enter 2nd Number: ");
        iValue2 = scanner.nextInt();

        iResult = Arithmatic.Addition(iValue1, iValue2);             // Business Logic

        System.out.println("Additions is: "+iResult);

      
    }
}