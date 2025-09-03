public class Error1 {

    public static void main(String[] args) {
        int a=10;
        int b=5;
        int c=5;
        int x,y;
        try {
            x = a/(b-c);
            System.out.println("x = "+x);
        } catch (Exception e) {
            System.out.println("Divided by Zero");
        } 
        y = a/(b+c);
        System.out.println("y = "+y);
    }
}