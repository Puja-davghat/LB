
class Program118
{
  public static void main(String [] a)
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
        System.out.println("Number :"+iNo); //1759


        System.out.println(iNo % 10 );  //175
        iNo = iNo /10 ;                   //175
        System.out.println("Number :"+iNo); //0
    }
}