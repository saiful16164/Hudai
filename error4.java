public class error4 {
    public static void main(String[] args) {
        int a[] ={5,10};
        try{
            a[1] = 'r';
        }
        catch(ArithmeticException e1)
        {
            System.out.println("Divided by zero");
        }
        catch(ArrayIndexOutOfBoundsException e2)
        {
            System.out.println("Array Index Error");
        }
        catch(ArrayStoreException e3)
        {
            System.out.println("Wrong Data exception");
        }
        finally{
            a[1]= 10;
        int y = a[1]/a[0];
        System.out.println("Y = "+y);
        }
        System.out.println("FUCK");
    }
}
