import java.util.ArrayList;
public class Employee implements Employees {

    private int EmployeeId;
    private String Name;
    private double Salary;

    public Employee(int EmployeeId, String Name, double Salary) {
        this.EmployeeId = EmployeeId;
        this.Name = Name;
        this.Salary = Salary;
    }

    public Employee() {
    }

    public int getEmployeeId() {
        return EmployeeId;
    }

    public String getName() {
        return Name;
    }

    public double getSalary() {
        return Salary;
    }

    public String toString() {
        return "Employee ID : " + EmployeeId + "\nEmployee Name : " + Name + "\nSalary : " + Salary+" BDT";
    }

    public static double totalSalary(ArrayList<Employee> Employees) {
        double totalSalary = 0;
        for (Employee employee : Employees) {
            totalSalary += employee.Salary;
        }
        return totalSalary;
    }
}
