import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        int sum = 0,num,r,temp;

        System.out.print("Enter a Number : ");
        num=input.nextInt();
        temp=num;
        
        while (temp!=0){
            r=temp%10;
            sum+=r;
            temp/=10;
        }
        System.out.println("Sum of the Number's Digits are : "+sum);
    }
}
