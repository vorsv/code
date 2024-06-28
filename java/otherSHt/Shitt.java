class Shitt {
    public static void main(String[] args) {
        for(int i=8;i>=0;i-=2){
            for(int j=0;j<=8-i;j++){
                System.out.print(" ");
            }
            for(int k=0;k<=i;k++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}