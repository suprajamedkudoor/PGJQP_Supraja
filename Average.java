import java.util.Scanner;
class Average
{
public static void main(String[] args)
{
int num1,num2,num3,num4,num5,avg;
System.out.println("enter five numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
num4=sc.nextInt();
num5=sc.nextInt();
avg=num1+num2+num3+num4+num5/2;
System.out.println(avg);
}
}