
import java.util.Scanner;

class Digit
{
    public int CountDigits(int iNo)
    {
        int iDigit = 0; 

        int iCount = 0;
        if(iNo < 0)             // this is called updater.. which change from negative to positive only
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iCount++;
            iDigit = iNo % 10;              
            iNo = iNo / 10;
        }
        return iCount;
    }
}

class program126
{
    public static void main(String A[])
    {   
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter the Number: ");
        int iValue = 0;
        int iResult = 0;

        iValue = scanner.nextInt();

        iResult = digit.CountDigits(iValue);
        System.out.println("Digit count is: "+iResult);


    }
}
