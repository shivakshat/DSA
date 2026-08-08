import java.util.Arrays;

public class SortArrayBuiltin {
    public static void main(String[] args) {
        int[] arr = { 4, 1, 7, 5, -3, 10, 2 };
        print(arr);
        System.out.println();
        Arrays.sort(arr);
        print(arr);
    }

    public static void print(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]+" ");
        }
    }
}