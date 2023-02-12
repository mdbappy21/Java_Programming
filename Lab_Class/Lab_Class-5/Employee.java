//Using Constructor.
public class Employee {
    int Id;
    String Name;
  //Create a class constructor for the Employee class.
    public Employee(int I, String N){
        this.Id=I;
        this.Name=N;
    }
  //Display Name & Id.
    void info(){
        System.out.println("Name : "+Name);
        System.out.println("Id : "+Id);
    }
  //Main method.
    public static void main(String[] args){
      //Create an object of class Main (This will call the constructor) 
      Employee emp = new Employee(5656,"Bappy");
        emp.info();
    }
}
