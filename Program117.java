
class Program117
{
  public static void main(String [] a)
    {
    
        int iNo = 7591;
           System.out.println("Number :" + iNo); //7592
       
        System.out.println(iNo % 10 );  //2
        iNo = iNo /10 ;                  //759
        System.out.println("Number :" + iNo); //759

        System.out.println(iNo % 10 );  //9
        iNo = iNo /10 ;                  //75
        System.out.println("Number :" + iNo); //75

        System.out.println(iNo % 10 );  //5
        iNo = iNo /10 ;                  //7
        System.out.println("Number :"+iNo); //7


        System.out.println(iNo % 10 );  //7
        iNo = iNo /10 ;                   //0
        System.out.println("Number :"+iNo); //0
    }
}