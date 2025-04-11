
class Ans{

        public static String deobfuscateFlag6(String input) {
            char[] chars = input.toCharArray();
            for (int i = 0; i < chars.length - 1; i += 2) {
                char temp = chars[i];
                chars[i] = chars[i + 1];
                chars[i + 1] = temp;
            }
            return new String(chars);
        }
        
        
        public static String deobfuscateFlag5(String input) {
            StringBuilder result = new StringBuilder();
            for (char c : input.toCharArray()) {
                result.append((char) ((c + '\r') % 256));
            }
            return result.toString();
        }   
        
        

        public static String deobfuscateFlag3(String obfuscatedFlag) {
            return obfuscatedFlag;
        }   

    public static void main(String[] args) {
        String a = "^9aNn4wx4%b2rc$4q8J$9$0jo2Mt286U";
        String[] secretArray = {"T915", "{", deobfuscateFlag3(deobfuscateFlag5(deobfuscateFlag6(a))), "}"};
            for (String secret : secretArray) {
                System.out.println("snitch" + "Even More secret: " + secret);
            }
    }

};