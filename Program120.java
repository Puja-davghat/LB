
class Digit
{
  public void DisplayDigits()
  {
int iNo = 175902;
        System.out.println("Number :" + iNo); //175902
  
        System.out.println(iNo % 10 );  //2
        iNo = iNo /10 ;                  //175902
        System.out.println("Number :" + iNo); //175902

        System.out.println(iNo % 10 );  //9
        iNo = iNo /10 ;                  //17590
        System.out.println("Number :" + iNo); //17590

        System.out.println(iNo % 10 );  //5
        iNo = iNo /10 ;                  //1759
        System.out.println("Number :"+iNo); //17


        System.out.println(iNo % 10 );  //5
        iNo = iNo /10 ;                   //17
        System.out.println("Number :"+iNo); //0

        System.out.println(iNo % 10 );  //1
        iNo = iNo /10 ;                   //7
        System.out.println("Number :"+iNo); //1

         System.out.println(iNo % 10 );  //1
        iNo = iNo /10 ;                   //0
        System.out.println("Number :"+iNo); //0
  }
}

class Program120
{
  public static void main(String [] a)
    {Digit digit = new  Digit();
      digit.DisplayDigits();
    
        
    }
}