import java.util.Scanner;
class Progarm342
{
    public static void main(String A [])
    {
 //int Arr[5] = {0}; //notaloud in java 
int Arr[] =new int[5];

int iCnt = 0 ;

Scanner scanner = new Scanner(System.in);
System.out.println("Enter the Elements");
for (iCnt =0;iCnt<Arr.length;iCnt++) // Arr.length
{
    Arr[iCnt]= scanner.nextInt();
}
System.out.println("Element of array are :\n");
for (iCnt =0;iCnt<Arr.length;iCnt++) // Arr.length
{
    System.out.println(Arr[iCnt]);
}
    }
}