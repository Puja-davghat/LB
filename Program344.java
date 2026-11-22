import java.util.Scanner;
class Progarm344
{
    public static void main(String A [])
    {
 int iCnt =0,iSize =0;

int ptr[]= null;
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
//step 3 : deallocate memory(free)
scanner = null;
ptr = null;
System.gc();
    }
}