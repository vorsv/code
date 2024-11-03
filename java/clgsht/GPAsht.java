import java.util.Scanner;

public class GPAsht{
    public static int[] gradeToMark(String[] c){
        int[] point = new int[c.length];  
        for (int i = 0; i < c.length; i++) {
            if(c[i]!=null) switch (c[i].toLowerCase()) {
                case "s":
                    point[i] = 10;
                case "a":
                    point[i] = 9;
                case "a+":
                    point[i] = 8;
                case "b":
                    point[i] = 7;
                case "b+":
                    point[i] = 6;
                case "c":
                    point[i] = 5;
                case "p":
                    point[i] = 4;
                case "f":
                    point[i] = 0;
                default:
                    point[i] = -1;
            }
            else {
                System.out.println("Invalid Grade found at subject" + (i+1));
                break;
            }
        }
        return point;
    }
    public static float get(){
        try (Scanner get = new Scanner(System.in)) {
            System.out.print("Enter no of Subjects :");
            int n = get.nextInt();
            int[] creds = getCreds(n); 
            String[] grad =             (n);
            int[] point = gradeToMark(grad);
            int total = sumSht(creds),score = scoreTot(point,creds);  
            return score/total;
        }
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
    public static String[] getGrade(int n){
        try (Scanner geta = new Scanner(System.in)) {
            String[] grad = new String[n];
                for (int i = 0; i < n; i++) {
                    System.out.print("Grade for Subject " + (i+1) + ":" );
                    grad[i] = geta.nextLine();
                }
            geta.close();
            return grad; 
        }   
    }
    public static int[] getCreds(int n){
        try (Scanner getc = new Scanner(System.in)) {
            int[] Cred = new int[n];
                for (int i = 0; i < n; i++) {
                    System.out.print("Creds for Subject " + (i+1) + ":" );
                    Cred[i] = getc.nextInt();
                }
                getc.close();
            return Cred; 
        }   
    }
    public static void main(String[] args) {
         System.out.println( "Your GPA is : " + get());
    }
}