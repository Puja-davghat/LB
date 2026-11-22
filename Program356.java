import java.util.Scanner;

class Number
{
    private int Arr[] ; //pointer but notlook
public Number(int iSize)
{
    Arr = new int [iSize];
}

public void Accept()
{
    Scanner scanner =new Scanner(System.in);
    int iCnt = 0;

    System.out.println("Enter the Elements :\n");

    for(iCnt =0; iCnt < Arr.length; iCnt++)
    {
        Arr[iCnt] = scanner.nextInt();
    }

}


public void Display()
{
int iCnt = 0;
System.out.println(" Elements of the Array are:\n");
 for(iCnt =0; iCnt < Arr.length; iCnt++)
    {
        System.out.println(Arr[iCnt]);
    }


}

}
class Program356
{

    public static void main(String A[])
    {
Number nobj1 = new Number(5);
nobj1.Accept();
nobj1.Display();

nobj1 =null;
System.gc();
    }
}