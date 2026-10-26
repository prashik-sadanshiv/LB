

class Program54
{
    public static void main(String A[])
    {
        Iteration iteration = new Iteration();          // creating object becouse need to call non static method from Iteration class
      
        iteration.Display();
    }
}

class Iteration
{
    public void Display()            // Now this is Non static method, if there is object of this class then only this method can call
    {
        System.out.println("Jay Prashik...");
        System.out.println("Jay Prashik...");
        System.out.println("Jay Prashik...");
        System.out.println("Jay Prashik...");
    }
}