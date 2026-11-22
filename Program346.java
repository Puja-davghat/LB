
import java.util.Scanner;
class Progarm346
{
    public static int Summation( int Arr[])
    {
        int iCnt =0, iSum = 0; 
        for(iCnt=0; iCnt <Arr.length; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;

    }
    public static float Average(int Arr[]) 
{
    int iCnt=0, iSum =0;
    for ( iCnt =0; iCnt < Arr.length; iCnt++)
  {
      iSum = iSum +Arr[iCnt];
  }
   return ((float)iSum / (float)Arr.length);
}


    public static void main(String A [])
    {
 int iCnt =0,iSize =0;
 int iRet = 0;
float fRet =0;

int ptr[]= null; // pointer
Scanner scanner = null;


 scanner = new Scanner(System.in);

System.out.println("Enter the Number of  Elements");
iSize = scanner.nextInt();

//Step1 : Allocate memory ;

 ptr = new int[iSize];


 //Step 2: Use the Memory;
System.out.println("Enter the Elements");
for (iCnt =0;iCnt<ptr.length;iCnt++) // Arr.length
{
    ptr[iCnt]=scanner.nextInt();
}
System.out.println("Element of array are :\n");
for (iCnt =0;iCnt<ptr.length;iCnt++) // Arr.length
{
    System.out.println(ptr[iCnt]);
}

iRet = Summation(ptr);
System.out.println("Addition is : "+iRet);


fRet=Average(ptr);
System.out.println("Average is : "+fRet);
//step 3 : deallocate memory(free)
scanner = null;
ptr = null;
System.gc();
    }
}