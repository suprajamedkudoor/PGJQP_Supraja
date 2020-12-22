import java.util.Scanner;
class SimpleIntrest
{
public static void main(String[] args)
{
int p,t,r;
int SI;
System.out.println("enter p,t,r values ");
Scanner sc=new Scanner(System.in);
 p=sc.nextInt();
 t=sc.nextInt();
 r=sc.nextInt();
 SI=p*t*r/100;
System.out.println(SI);
}
}