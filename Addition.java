import java.util.Scanner;
class Addition
{
public static void main(String[] args)
{
int num1,num2,add;
System.out.println("enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
add=num1+num2;
System.out.println(add);
}
}