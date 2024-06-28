import java.util.Scanner;

public class Hello {
    public static void main(String[] args) {
        try (Scanner get = new Scanner(System.in)) {
            System.out.print("enter text :");
            String str = (get.nextLine());
            char a[] = str.toCharArray();
            int i =0,n=a.length,j=0;
            while (i<n){
                while( (a[i]!=((char)((int)'A'+j)-1 )) && a[i]!=' ' ){
                    System.out.println(str.substring(0, i)+(char)((int)'A'+j));
                    j++;
                    wait(30);
                }
                j=0;
                i++;
            }          
        }
    }
    public static void wait(int ms)
{
    try
    {
        Thread.sleep(ms);
    }
    catch(InterruptedException ex)
    {
        Thread.currentThread().interrupt();
    }
}
}
