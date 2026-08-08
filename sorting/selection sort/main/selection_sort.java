package main;
// Time complexity - n * (n+1)/2
public class selection_sort {
    static void select_sort() {
        int[] arr = { 1, 2, 3, 4, 5, 6 };
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            int min=Integer.MAX_VALUE;
            int mindx=-1;
            for (int j = i; j < n - 1; j++) {
                if(arr[j]<min){
                    min=arr[j];
                    mindx=j;        
                }
            }
            int temp=arr[i];
            arr[i]=arr[mindx];
            arr[mindx]=temp;
        }
        System.out.println(arr);
    }

    public static void main(String[] args) {
        selection_sort.select_sort();
    }
}