import java.util.Scanner;
public class array_basics {
    void learnings(){
        System.out.println("********************Learnings****************************");
        System.out.println("1. arr.length");
        System.out.println("2. Initialising array");
        System.out.println("3. Inputing array");
        System.out.println("4. Type casting");
        System.out.println("******************************************************\n");

    }
    public static void main(String[] args) {
        array_basics ab = new array_basics();
        Scanner sc = new Scanner(System.in);
        ab.learnings();
        // int[] x = {1,2,3,4,5};
        // System.out.println(x); - addressing
        // System.out.println(x[0]); // 1
        // x[0] = 0;
        // System.out.println(x[0]);
        // int min = Integer.MIN_VALUE;
        // int max = Integer.MAX_VALUE;
        // System.err.println(min);
        // System.err.println(max);
        char m = '\0';
        int n = 65;
        System.out.println((char)n);
    }
}