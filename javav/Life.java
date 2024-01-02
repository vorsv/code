import java.security.SecureRandom;
import java.util.Arrays;
import java.util.Random;

public class Life {
    static int a = 40;
    static int b = 40;
    static int[][] c = new int[a+2][a+2];
    static int[][] d = new int[a+2][a+2];
    private static Random rand = new SecureRandom();
    public Life(int o){
        givearr(a, b);
        lifee(o);
    }
    public static void lifee(int y){
        for (int z=0;z<y;z++){
            int x = z+1;
            System.out.println("\nGen ->"+x);
            outarr();
            if(checkdeath()){break;}
            statemod();
            overwriter();
        }
    }
    public static boolean checkdeath(){
        int r = 0;
        for(int i=1;i<a;i++){
            for(int j=1;j<b;j++){
                r+=c[i][j];
            }
        }
        if(r==0) {
            System.out.println("all cells died");
            return true;
        }
        else{return false;}
    }
    public static void statemod(){
        for(int i=1;i<a;i++){
            for(int j=1;j<b;j++){
                int neigh = count(i,j);
                if (c[i][j] == 0 && neigh == 3 ){
                    d[i][j]=1;
                }
                else if (c[i][j] == 1 && (neigh<3 || neigh > 2)){
                    d[i][j]=0;
                }
                else{
                    d[i][j] = c[i][j];
                }
            }   
        }
    }
    public static int count(int i,int j){
        int sum=0;
        sum+=c[i-1][j-1];
        sum+=c[i-1][j];
        sum+=c[i-1][j+1];
        sum+=c[i][j-1];
        sum+=c[i][j+1];
        sum+=c[i+1][j-1];
        sum+=c[i+1][j];
        sum+=c[i+1][j+1];
        return sum;
    }
    public static void overwriter(){
        c = Arrays.copyOf(d, a+2);
    }
    public static void givearr(int a,int b){
        for(int i=0;i<a+2;i++){
            for(int j=0;j<b+2;j++){
                c[i][j]= randbin();
            }   
        }
    }
    public static int randbin(){
        return rand.nextInt(2);
    }
    public static void outarr(){
        System.out.println("\n\n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < a; j++) {
            prinMod(i, j);
            }
        System.out.print("\n");
        }
    }
    public static void prinMod(int i, int j){
        String a ;
        if(c[i][j]==0){
            a="  ";
        }
        else if(c[i][j]==1){
            a="# ";
        }
        else{
            throw new RuntimeException("Error in array!");
        }        
        System.out.print(a);
    }
    public static void main(String[] args){
        new Life(5) ;
    }
}