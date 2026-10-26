
import java.util.Scanner;

class Digit
{
    public void DisplayDigits(int iNo)
    {
        int iDigit = 0; 

        if(iNo < 0)             // this is called updater.. which change from negative to positive only
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;              
            iNo = iNo / 10;
            System.out.println(iDigit);
        }
    }
}

class program125
{
    public static void main(String A[])
    {   
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter the Number: ");
        int iValue = 0;

        iValue = scanner.nextInt();

        digit.DisplayDigits(iValue);
    }
}
