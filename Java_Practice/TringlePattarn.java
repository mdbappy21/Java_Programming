import java.util.Scanner;

public class TringlePattarn {
    public static void main(String[] args) {
        int row, col,n;
        Scanner input =new Scanner(System.in);
        System.out.print("Enter a the Row Number : ");
        n = input.nextInt();

        for (row=1;row<=n;row++){

            for (col=1;col<=n-row;col++)  //printing space
                System.out.print("  ");

            for (col=1;col<=row;col++)  //printing *
                System.out.print("* ");

            for (col=row-1;col>=1;col--)  //printing *
                System.out.print("* ");
            System.out.print("\n");
        }
    }
}
