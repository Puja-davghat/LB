
 import java.util.*;
 class Program29
{
    public static void main(String A [] )
    {
        Scanner scanner = null;
        String sName = null ;
        int iAge = 0;

        float fMarks = 0.0f;
        
   

       scanner = new Scanner(System.in);
        System.out.println("Enter your Name");
        sName = scanner.nextLine();/// exception
    System.out.println("Welcome, " + sName + "!"); 
    
        System.out .println("Enter your Age");
        iAge = scanner.nextInt();

        System.out.println("Enter your Marks");
        fMarks = scanner.nextFloat();

        System.out.println("Your Age is : " + iAge);
        System.out.println("Your Marks are : " + fMarks);

       
    }

}