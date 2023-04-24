import java.util.Scanner;

public class ReverseNumber {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        int revNum = 0,num,remainder,temp;

        System.out.print("Enter a Number : ");
        num=input.nextInt();
        temp=num;

        while (temp!=0){
            remainder=temp%10;
            revNum=(revNum*10)+remainder;
            temp/=10;
        }
        System.out.println("Reverse Number : "+revNum);
    }
}
