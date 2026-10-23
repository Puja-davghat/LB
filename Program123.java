
class Digit
{
  public void DisplayDigits(int iNo)
  {
   
    int iDigit = 0;

    while(iNo != 0)
        {

        iDigit = iNo % 10; 
        iNo = iNo /10 ;                  
        System.out.println(iDigit); 
        }
        
  }

}

class Program123
{
  public static void main(String [] a)
    {Digit digit = new  Digit();
      digit.DisplayDigits(9752);
    
        
    }
}