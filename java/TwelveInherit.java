public class TwelveInherit {
    public class Animal{
        public Animal(){
            System.out.println("animal const in");
        }
    }
    public class Donkey extends Animal{
        public Donkey(){
            System.out.println("donkey const in");
        }
    }
    public class Horse extends Donkey{
        public Horse(){
            System.out.println("horse const in");
        }
    }
    public static void main(String[] args){
        TwelveInherit t = new TwelveInherit();
        t.new Horse();
    }
}
