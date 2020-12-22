import java.util.Scanner;
class QuoRem
{
public static void main(String[] args)
{
int Quotient, remainder,divisor, dividend;
Scanner sc=new Scanner(System.in);
System.out.println("enter dividend");
dividend=sc.nextInt();
System.out.println("enter divisor");
divisor=sc.nextInt();
Quotient=dividend/divisor;
remainder=dividend%divisor;
System.out.println(Quotient);
System.out.println(remainder);
}
}