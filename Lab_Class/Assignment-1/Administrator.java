public class Administrator extends Employee {
    private String Department;

    public Administrator(int EmployeeId, String Name, double Salary, String Department) {
        super(EmployeeId,Name, Salary);
        this.Department = Department;
    }

    public String getDepartment() {
        return Department = "Computer Science and Engineering";
    }

    public String toString() {
        return super.toString() + "\nDepartment: " + Department;
    }
}
