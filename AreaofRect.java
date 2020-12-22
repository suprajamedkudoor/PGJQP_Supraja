import java.util.Scanner;
class AreaofRect
{
public static void main(String[] args)
{
int length,width;
int Areaofr,perimeter;
System.out.println("enter length and width values ");
Scanner sc=new Scanner(System.in);
 length=sc.nextInt();
 width=sc.nextInt();
 Areaofr=length*width;
perimeter=(2*length+2*width);
System.out.println(Areaofr);
System.out.println(perimeter);
}
}