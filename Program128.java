
import java.util.Scanner;

class Counts
{
  int SumDigits(int iNo)
  {
    int iSum = 0 ;
    int iDigit = 0;
    if(iNo <0 )
    {
      iNo = -iNo;
    }

    while(iNo != 0)
        {

        iDigit = iNo % 10; 
        iSum = iSum + iDigit;
        iNo = iNo /10 ;                  
        
        }
      return iSum;
  }

}

class Program128
{
  public static void main(String [] a)
    {
        
     Scanner scanner = new Scanner(System.in);
     int iRet = 0;
      Counts counts = new Counts();


      

      System.out.println("Enter Number :");
      int iValue = scanner.nextInt();
    
       iRet = counts.SumDigits(iValue);

       System.out.println("Summation Of Digit :" +iRet); 
    }
}