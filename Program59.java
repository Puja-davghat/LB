import java.util.Scanner;

class Program59
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

        //input Updater
        if (iNo < 0) 
        {
            iNo = -iNo;
            
        }


        for(iCnt=1;  iCnt<=iNo;  iCnt++)
        {
            System.err.println("Jay ganesh...!");
        }
    }
}