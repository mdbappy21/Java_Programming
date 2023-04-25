public class person {
    String Name;
    int age;
   public person(String Name,int age){
        this.Name=Name;
        this.age=age;
    }
   //Object Class's method toString which return String .
    @Override 
    public String toString(){
       return "Name : "+Name+"\tAge : "+age;
    }
}

public class Test {
    public static void main(String[] args) {
        person p1=new person("Bappy",23);
        person p2=new person("Akash",23);
        person p3=new person("Auntu",23);

      //toString method helps to print all the value in a object.
        System.out.println(p1);
        System.out.println(p2);
        System.out.println(p3);
    }
}
