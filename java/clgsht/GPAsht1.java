import java.util.Scanner;

public class GPAsht1{
    public static int[] gradeToMark(int n,Scanner getc){
        String[] grad = getGrade(n,getc);
        String s="s";
        int[] point = new int[n];  
        printarr(point);
        for (int i = 0; i < n; i++) {
            if(grad[i]!=null){
                System.out.println(grad[i]+".");
                if      (grad[i].strip() == s )   point[i] = 10;
                else if (grad[i].strip() == "a" ) point[i] = 9;
                else if (grad[i].strip() == "a+") point[i] = 8;
                else if (grad[i].strip() == "b" ) point[i] = 7;
                else if (grad[i].strip() == "b+") point[i] = 6;
                else if (grad[i].strip() == "c" ) point[i] = 5;
                else if (grad[i].strip() == "p" ) point[i] = 4;
                else if (grad[i].strip() == "f" ) point[i] = 0;
                else                              point[i] = -1;
            }
            else {
                System.out.println("Invalid Grade found at subject" + (i+1));
                break;
            }
        }  
        printarr(point);
        return point;
    }
    public static float get(Scanner getc){
        System.out.print("Enter no of Subjects :");
        int n = getc.nextInt();
 
        int[] creds = getCreds(n,getc); 

        int[] point = gradeToMark(n,getc);
        // printarr(point);
        int total = sumSht(creds),score = scoreTot(point,creds);  
        return score/total;

    }
    public static void printarr(int[] args) {
        for (int i = 0; i < args.length; i++) System.out.println(args[i]);
    }
    public static int scoreTot(int[] point,int[] creds){
        int n = 0;
        for(int i=0;i<creds.length;i++) n+=(creds[i]*point[i]);
        return n;

    }
    public static int sumSht(int[] sht){
        int sum = 0;
        for (int i = 0; i < sht.length; i++) sum+=sht[i];
        return sum ;
    }
    public static String[] getGrade(int n,Scanner getc){
        String[] Grad = new String[n];
            for (int i = 0; i < n; i++){
                System.out.print("Grade for Subject " + (i+1) + ":" );
                Grad[i] = getc.next();
            }
        return Grad; 
    }
    public static int[] getCreds(int n,Scanner getc){
        int[] Cred = new int[n];
            for (int i = 0; i < n; i++){
                System.out.print("Creds for Subject " + (i+1) + ":" );
                Cred[i] = getc.nextInt();
            }
        return Cred; 
    }
    public static void main(String[] args) {
        try (Scanner getc = new Scanner(System.in)) {
         System.out.println( "Your GPA is : " + get(getc));
        }
    }
}