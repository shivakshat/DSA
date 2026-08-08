import java.util.Scanner;
import java.util.Arrays;


public class copy {
    void learnings() {
        System.out.println("********************Learnings****************************");
        System.out.println("1. Shallow copy");
        System.out.println("2. Deep copy");
        // System.out.println("3. ");
        // System.out.println("4. ");
        System.out.println("******************************************************\n");
        // System.out.println("********************Learnings****************************");
        // System.out.println("1. ");
        // System.out.println("2. ");
        // System.out.println("3. ");
        // System.out.println("4. ");
        // System.out.println("******************************************************\n");

    }
    public static void main(String[] args) {
        copy ab = new copy();
        Scanner sc = new Scanner(System.in);
        ab.learnings();
        // Shallow copy
        int x[] = { 10, 3, 29, 38 }; 
        int arr[] = x;
        arr[3] = 3;
        System.out.println(x[3]);

        int arr2[] = Arrays.copyOf(x,x.length);
        arr2[2] = 2;
        System.out.println(arr2[2]);
        System.out.println(x[2]);

    }
}