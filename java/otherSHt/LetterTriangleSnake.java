public class LetterTriangleSnake{
    public static void main(String[] args) {
        letterTriangleSnake();
    }
    public static void numberTriangleSnake(int f) {
        int a = 0, i=0, j=0;
        while(a < 26 && j<26 && i<26){
            if( i%2==1){
                for(int l=0;l<i;l++){ 
                    if(a<f) break;
                    else System.out.print(a+1 + " ");
                    a++;
                }
                
            }
            else{
                for(j=i;j>0;j--){
                    if(a<f) break;
                    else System.out.print(a+j + " ");
                }
                a+=i;
            }
            System.out.println();
            i++;
        }
    }
    public static void letterTriangleSnake() {
        int a=96, i=0, j=0;
        while(a < 122 && j<26 && i<26){
            if( i%2==1){
                for(int l=0;l<i;l++){ 
                    if(a>=122) break;
                    else System.out.print(((char)(a+1)) + " ");
                    a++;
                }
                
            }
            else{
                for(j=i;j>0;j--){
                    if(a>=122) break;
                    else System.out.print(((char)(a+j))+ " ");
                }
                a+=i;
            }
            System.out.println();
            i++;
        }
    }
}    
