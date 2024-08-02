public class comp {
    public static void main(String[] args) {// a=p((r/100)+1)^t
        if (args.length==3) {
            float p = Float.parseFloat(args[0]),r = Float.parseFloat(args[1]),t = Float.parseFloat(args[2]);
            float a = ( p * (float)(Math.pow((1+(r/100)),(t))) );
            System.out.println("the final amount is " + a);
        }
        else System.out.println("pls input in args as follows 'comp amount interest time'");
    }  
}
