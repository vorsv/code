import java.util.Scanner;

public class HelloWithNum{
    public static void main(String[] args) {
        try (Scanner get = new Scanner(System.in)) {
            System.out.print("enter text :");
            String str = (get.nextLine());
            char a[] = str.toCharArray();
            char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijaklmnopqrstuvwxyz1234567890 .,;:'*?!@#$%^&()_+{}[]<> ".toCharArray();
            int i =0,n=a.length,j=0;
            while (i<n ){
                while( (a[i]!=l[j]) && j<l.length-1){
                    System.out.println(str.substring(0, i)+l[j]);
                    j++;
                    wait(15);
                }
                j=0;
                i++;
            }
            System.out.println(str);          
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
