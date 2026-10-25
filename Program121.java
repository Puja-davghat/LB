
class Digit
{
  public void DisplayDigits()
  {
    int iNo = 175902;
      while(iNo != 0)
        {

        System.out.println("Digits is :" + iNo % 10 );  
        iNo = iNo /10 ;                  
        System.out.println("Number :" + iNo); 
        }
        
  }

}

class Program121
{
  public static void main(String [] a)
    {Digit digit = new  Digit();
      digit.DisplayDigits();
    
        
    }
}