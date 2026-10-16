import java.util.Scanner;

class Program65
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
class Iteration
{
    public void Display(int iNo)
    {
        
        int iCnt = 0;

        for(iCnt= iNo;  iCnt >= 1;  iCnt--)
        {
            System.out.println("--------------");
            System.out.println(iCnt + " Jay Ganesh....!");
            System.out.println("--------------");
            
        }
    }
}