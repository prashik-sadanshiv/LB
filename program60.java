import java.util.Scanner; 

class program60
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);

        int iValue = 0;

        Iteration iteration = new Iteration();          // creating object becouse need to call non static method from Iteration class

        System.out.println("Enter the number: ");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
    public void Display(int iNo)            // Now this is Non static method, if there is object of this class then only this method can call
    {
        int iCnt = 0;
        
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("-----------------------");
            System.out.println("Jay Bharat...");
            System.out.println("-----------------------");
            
        }
    }
}