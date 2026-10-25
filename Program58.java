import java.util.Scanner;

class Program58
 {
   public static void main(String[] args) 
    {
        Scanner scanner =   new Scanner(System.in);
        int iValue = 0;


        Iteration iteration = new Iteration();
        System.out.println("Enter The Frequency...");
        iValue = scanner.nextInt();

        iteration.Display(iValue);

    }

}
class Iteration{
    public void Display(int iNo)
    {
        
        int iCnt = 0;

        //input filter
        if (iNo <= 0) 
        {
            System.out.println("Invalid Input,...!");
            return;
        }


        for(iCnt=1;  iCnt<=iNo;  iCnt++)
        {
            System.err.println("Jay ganesh...!");
        }
    }
}