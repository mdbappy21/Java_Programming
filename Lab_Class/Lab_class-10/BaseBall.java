public class BaseBall extends Ball {

    public BaseBall(String brandName){
        super(brandName);
    }

    public void toss(){
        System.out.println("Baseball's toss is : Tail");
    }

    public void bounce(){
        System.out.println("Baseball is bounced.");
    }
}
