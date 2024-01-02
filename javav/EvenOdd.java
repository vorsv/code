import java.util.Scanner;

public class EvenOdd {
    public static void main(String[] args){
            System.out.println("Enter a number :");
            try (Scanner inp = new Scanner(System.in)) {
                int num = inp.nextInt();
                String casee = (num%2==0)?"even":"odd";
                System.out.println(num + " is " +casee);
            }
    }
}
