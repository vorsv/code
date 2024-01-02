import java.util.Scanner;

public class FourClass {
    public static void main(String[] agrs){
        new FourClass();
    }
    public FourClass(){
        new Stu();
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
            System.out.println("\n\nName :" + name); 
            System.out.println("Roll :" + roll); 
            System.out.println("Age  :" + age);                      
        }
        public Stu(){
            get();
            put();
        }
    }
}
