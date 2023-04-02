public class Exception {
    public static void main(String[] args) {
        int []a = new int[5];
        String S = null;
        String A = "ABC";

        try {
           a[2] = 10/0;  //Arithmetic Exception.
           System.out.println("Access Element Three"+a[5]); //Array Index out of Bounds.
           System.out.println(S.length()); //Null pointer Exception.
           int Number = Integer.parseInt(A); //Number Format Exception.
        }

        catch (ArithmeticException E) {
            System.out.println("Arithmetic Exception");
        }

        catch (ArrayIndexOutOfBoundsException E) {
            System.out.println("Array Index out of Bounds ");
        }

        catch (NullPointerException E) {
            System.out.println("Null pointer Exception");
        }

        catch (NumberFormatException E) {
            System.out.println("Number Format Exception");
        }
    }
}
