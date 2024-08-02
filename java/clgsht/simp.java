public class simp {
    public static void main(String[] args) {
        if (args.length==3) {
            float x  = (float)(((Float.parseFloat(args[0]))*(Float.parseFloat(args[1]))*(Float.parseFloat(args[2])))/100);
            System.out.println("Final amount for the principal " + args[0] + " on " + args[1] + " % interst over " + args[2] + " years of time is " + (Float.parseFloat(args[0])+x) );           
        }
        else System.out.println("pls input in args as follows 'simp amount interest time'");
    }  
}