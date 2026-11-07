import java.util.Scanner;

public class Math_3{
    public static void main(String[]args){

        Scanner sc=new Scanner(System.in);

        System.out.print("Enter a 1st Number:");
        int a=sc.nextInt();
        System.out.print("Enter a 2nd Number:");
        int b=sc.nextInt();

        System.out.println("\nAddition = " + (a + b));
        System.out.println("\nSubtraction = " + (a - b));
        System.out.println("\nMultiplication = " + (a * b));

        if(b!=0){
            System.out.println("\nDivision = " + (double)a / b);
            System.out.println("\nRemainder = " + (a % b));
        }
        else{
            System.out.println("In This Case Division and Reminder is not Possible.You Entered Invalid Number.Please Try Again.");
        }
        sc.close();
    }
}

