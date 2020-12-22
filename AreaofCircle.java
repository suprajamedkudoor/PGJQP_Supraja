import java.util.Scanner;
import java.lang.Math;
class AreaofCircle
{
public static void main(String[] args)
{
int r;
double pi=3.14;
int Areaofcircle;
System.out.println("enter r value ");
Scanner sc=new Scanner(System.in);
 r=sc.nextInt();
 Areaofcircle=(2*pi*r*r);
System.out.println(Areaofcircle);
}
}