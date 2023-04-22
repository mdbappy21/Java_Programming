public class Professor extends Employee {
    private String SubjectOfExpertise;

    public Professor(int EmployeeId, String Name, double Salary, String SubjectOfExpertise) {
        super(EmployeeId, Name, Salary);
        this.SubjectOfExpertise = SubjectOfExpertise;
    }

    public String getSubjectOfExpertise() {
        return SubjectOfExpertise="Object Oriented Programming";
    }

    public String toString() {
        return super.toString() + "\nSubject of Expertise : " + SubjectOfExpertise;
    }
}
