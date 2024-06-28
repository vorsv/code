import java.util.Scanner;

public class Something {
    public static void main(String[] args){
        try (Scanner get = new Scanner(System.in)) {
            System.out.println("enter n :");
            int a = get.nextInt();
            for(int i=0;i<a;i++){
                for(int j=a;j>i;j--){
                    System.out.print(j);
                }
                System.out.println();
            }
            
        }        
    }
}