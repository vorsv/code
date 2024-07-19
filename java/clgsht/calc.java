
public class calc {
    public static void main(String[] args) {
        System.out.println(args.length );
        try {
            if ((args.length == 3)) {           
                float x = Float.parseFloat(args[0]);
                float y = Float.parseFloat(args[2]);
                switch (args[1]) {
                    case "+":
                        System.out.println(x + y);
                        break;
                    case "-":
                        System.out.println(x - y);
                        break;
                    case "*":
                        System.out.println(x * y);
                        break;
                    case "%":
                        System.out.println(x % y);
                        break;
                    case "/":
                        if (y == 0) {
                            System.out.println("Error: Division by zero.");
                        } else {
                            System.out.println(x / y);
                        }
                        break;
                    default:
                        System.out.println("Error: Invalid operator.");
                        break;
                }
            } else {
                System.out.println("Error: Invalid input. Please enter two numbers and an operator. ' 3 + 4 '");
            }
        } catch (NumberFormatException e) {
            System.out.println("Error: Invalid input. Please enter two numbers and an operator.");
        }
    }
}
