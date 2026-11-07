import java.util.Scanner;

public  class  NameCollegeAge_1{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name=sc.nextLine();
        
        System.out.print("Enter your Age: ");
        int age=sc.nextInt();
        sc.nextLine();
        
        System.out.print("Enter your College Name: ");
        String collegeName=sc.nextLine();

        System.out.println("------- Student Details -------\n");
        System.out.println("Name:"+name);
        System.out.println("Age: "+age);
        System.out.println("College Name: "+collegeName);

        sc.close();
    }
}
