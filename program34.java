// Approach 2

import java.util.Scanner;

class program34
{
    public int Addition(int iNo1, int iNo2)         
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
    public static void main(String A[])
    {
        Scanner scanner = null;
        scanner = new Scanner(System.in);
        
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter 1st Number: ");
        iValue1 = scanner.nextInt(); 
        
        System.out.println("Enter 2nd Number: ");
        iValue2 = scanner.nextInt();

        iResult = Addition(iValue1, iValue2);             // Business Logic

        System.out.println("Additions is: "+iResult);

        // program34.java:26: error: non-static method Addition(int,int) cannot be referenced from a static context
        // iResult = Addition(iValue1, iValue2);             // Business Logic
        
    }
}