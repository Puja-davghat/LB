
import java.util.Scanner;
class Counts
{
  int CountDigits(int iNo)
  {
    int iCount = 0 ;
    
    if(iNo <0 )
    {
      iNo = -iNo;
    }

    while(iNo != 0)
        {

        
        iNo = iNo /10 ;                  
        iCount++;
        }
      return iCount;
  }

}

class Program127

{
  public static void main(String [] a)
    {
        
     Scanner scanner = new Scanner(System.in);
     int iRet = 0;
      Counts counts = new  Counts();


      

      System.out.println("Enter Number :");
      int iValue = scanner.nextInt();
    
       iRet = counts.CountDigits(iValue);

       System.out.println("Number Of Digit :" +iRet); 
    }
}