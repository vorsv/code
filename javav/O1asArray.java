import java.util.Scanner;

public class O1asArray {
    public static void main(){
        O1asArray g = new O1asArray() ;
        stu(g);
    } 
    public static void stu(O1asArray h){//
        try (Scanner get = new Scanner(System.in)) {
            System.out.println("enter number of elements :");
            int n = get.nextInt(); 
            Stu[] g = new Stu[n];
            for (int i =0 ;i<n;i++){
                int f = i+1;
                System.out.println("\n" + f + ".");
                g[i] =h.new Stu(); 
            }
            System.out.println("stored data is           :");
            for (int i =0 ;i<n;i++){
                int f = i+1;
                System.out.println("\n" + f + ".");
                g[i].put(); 
            }
        }
    }
    public class Stu{
        int roll;
        int age;
        String name;
        Scanner getin = new Scanner(System.in);
        public void get(){
            System.out.println("Enter your Name :");
            name=getin.nextLine();
            System.out.println("Enter your roll :");
            roll=getin.nextInt();
            System.out.println("Enter your age  :");
            age=getin.nextInt();
        }
        public void put(){
            System.out.println("Name :" + name); 
            System.out.println("Roll :" + roll); 
            System.out.println("Age  :" + age);                      
        }
        public Stu(){
            get();
        }
    }
}
