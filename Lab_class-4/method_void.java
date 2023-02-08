public class method_void {
    //Static method.
    static void s_method()
    {
        System.out.println("Static method");
    }
    //Non-static method.
    public void method()
    {
        System.out.println("Non-static method");
    }
    //Main method
    public static void main(String[] args)
    {
        s_method();
        method_void obj = new method_void();
        obj.method();
    }
}
