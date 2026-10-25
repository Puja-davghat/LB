
import java.util.Scanner;

class Digit
{
  int SumDigits(int iNo)
  {
    int iSum = 0 ;
   
    if(iNo <0 )
    {
      iNo = -iNo;
    }

    while(iNo != 0)
        {

      
        iSum = (iNo % 10) + iSum;
        iNo = iNo /10 ;                  
        
        }
      return iSum;
  }

}

class Program129
{
  public static void main(String [] a)
    {
        
     Scanner scanner = new Scanner(System.in);
     int iRet = 0;
      Digit digit = new Digit();


      System.out.println("Enter Number :");
      int iValue = scanner.nextInt();
    
       iRet = digit.SumDigits(iValue);

       System.out.println("Summation Of Digit :" +iRet); 
    }
}