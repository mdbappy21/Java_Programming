public class Ball implements Tossable{
    private String brandName;

    public Ball(String brandName){
        this.brandName=brandName;
    }

    public void setBrandName(String brandName) {
        this.brandName = brandName;
    }

    public String getBrandName() {
        return brandName;
    }

    public void bounce(){
        System.out.println("Ball is bounced.");
    }

    public void toss(){
        System.out.println("Ball's toss is : Head");
    }
}
