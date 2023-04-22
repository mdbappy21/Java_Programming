public class Main {
    public static void main(String[] args) {

        System.out.println("Professor's Information-1 : ");
        Professor professor1 = new Professor(1000, "Akash", 60000, "Object Oriented Programming");
        System.out.println(professor1.toString()+"\n");

        System.out.println("Professor's Information-2 : ");
        Professor professor2=new Professor(1001,"Auntu",60000,"Programming and Problem Solving");
        System.out.println(professor2.toString()+"\n");

        System.out.println("Support Staff's Information : ");
        SupportStaff supportStaff1 = new SupportStaff(2000, "Pranto", 40000, "Assistant");
        System.out.println(supportStaff1.toString()+"\n");

        System.out.println("Administrator's Information : ");
        Administrator Administrator1 = new Administrator(3000, "Bappy", 50000, "Computer Science and Engineering");
        System.out.println(Administrator1.toString()+"\n");

        Employee[] employees = { professor1,professor2, Administrator1, supportStaff1 };

        System.out.println("Total Salary: $" + Employee.totalSalary(employees));
    }
}
