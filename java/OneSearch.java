import java.util.Scanner;

public class OneSearch{
    public static void main(String[] args){
        try(Scanner get = new Scanner(System.in)){
            System.out.println("enter number of elements :");
            int n = get.nextInt(); 
            int[] a = new int[n];
            for(int i=0;i<n;i++){
                System.out.print("enter a["+i+"] :");
                a[i]= get.nextInt(); 
            }
            System.out.println("enter number to search   :");
            int j = get.nextInt(); 
            for(int i=0;i<n;i++){
                if(j==a[i]){
                    System.out.println(j +" is in a["+i+"]");
                }
                else if (i== n-1){
                    System.out.println(j +" is not in the array");
                    break;
                }
            }

        }

    }
}