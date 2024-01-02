import java.util.Scanner;
public class IOOperation {
    public static void main(String[] args){
            System.out.println("uname ::");
            try (Scanner inp = new Scanner(System.in)) {
                String uname = inp.nextLine();
                System.out.println(uname);
            }
    }
}
