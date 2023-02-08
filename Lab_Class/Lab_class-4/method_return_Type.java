public class method_return_Type {
    //Static method.
    static int s_method()
    {
        System.out.println("Static method");
        return 5;
    }
    //Non-static method.
    public int method()
    {
        System.out.println("Non-static method");
        return 10;
    }
    //Main method
    public static void main(String[] args)
    {
        method_return_Type obj = new method_return_Type();
        System.out.println(s_method());
        System.out.println(obj.method());
    }
}
