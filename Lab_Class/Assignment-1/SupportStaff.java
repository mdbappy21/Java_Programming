public class SupportStaff extends Employee {
    private String JobTitle;

    public SupportStaff(int EmployeeId, String Name, double Salary, String JobTitle) {
        super(EmployeeId, Name, Salary);
        this.JobTitle = JobTitle;
    }

    public String getJobTitle() {
        return JobTitle ="Assistant" ;
    }

    public String toString() {
        return super.toString() + "\nJob Title: " + JobTitle;
    }
}
