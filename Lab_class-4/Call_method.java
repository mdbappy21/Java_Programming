public class Call_method {
    //Static method.
    static void s_method(){
        System.out.println("Static method");
    }
    //Public method.
    public void method(){
        System.out.println("Non-static method");
    }
    //Main method
    public static void main(String[] args) {
       //static method call.
        s_method();
        Call_method obj = new Call_method();
        //Non-static method call.
        obj.method();
    }
}
