import java.util.Scanner;
public class _2 {
    public static void main(String[] args) {
                    int x,y,sum;
                    try (Scanner myObj = new Scanner(System.in)) {
                        System.out.println("Enter a number");
                        x=myObj.nextInt();

                        System.out.println("Enter another number :");
                        y=myObj.nextInt();
                    }
                    sum=x+y;
                    System.out.println("Sum is : "+sum);

    }

   
}
