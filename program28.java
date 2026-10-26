import java.util.Scanner;

class program28
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;         

        scanner = new Scanner(System.in);
        
        System.out.println("Enter your name: ");
        sName = scanner.next();                 // Runtime Exeption occured due to 

        System.out.println("Enter your age: ");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks: ");
        fMarks = scanner.nextFloat();

        System.out.println("Your Name: "+sName);
        System.out.println("Age is: "+iAge);
        System.out.println("And Marks is: "+fMarks);
    }
}