import java.util.Scanner;

public class passing_arrays_to_methods {

    void learnings() {
        System.out.println("********************Learnings****************************");
        System.out.println("1. Passing arrays to arrays");
        System.out.println("2. ");
        System.out.println("3. ");
        System.out.println("4. ");
        System.out.println("******************************************************\n");
        // System.out.println("********************Learnings****************************");
        // System.out.println("1. ");
        // System.out.println("2. ");
        // System.out.println("3. ");
        // System.out.println("4. ");
        // System.out.println("******************************************************\n");

    }
    public static void main(String[] args) {
        passing_arrays_to_methods ab = new passing_arrays_to_methods();
        Scanner sc = new Scanner(System.in);
        ab.learnings();
        int x[] = { 10, 3, 29, 38 };
        System.out.println(x[2]);
        change(x);
        System.out.println(x[2]);

    }
    public static void change(int[] x) {
        x[2] = 99;
    }
}