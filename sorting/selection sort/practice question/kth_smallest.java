public class kth_smallest {
 static int select_sort(int k, int[] arr) {
        int n = arr.length;

        for (int i = 0; i < k; i++) {
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
        return arr[k-1];
}

    public static void main(String[] args) {
        int arr[] = {4, 5, 1, 2, 3,  6 };
        int k = 3;
        System.out.println(kth_smallest.select_sort(k, arr));
    }
}