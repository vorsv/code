import java.util.Scanner;

public class Area {
    public static void main(String[] args){
        try (Scanner get = new Scanner(System.in)) {
            System.out.println("enter the value of rectangle's side a :");
            int a = get.nextInt();
            System.out.println("enter the value of rectangle's side b :");
            int b = get.nextInt();
            int c = b * a;
            System.out.println("the area is " + c);
        }        
    }
}
