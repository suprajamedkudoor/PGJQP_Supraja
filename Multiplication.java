import java.util.Scanner;
class Multiplication
{
public static void main(String[] args)
{
int num1,num2,mul;
System.out.println("enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
mul=num1*num2;
System.out.println(mul);
}
}