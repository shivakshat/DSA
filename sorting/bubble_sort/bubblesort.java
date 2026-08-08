class descOrder{
    void sort(){
        int n = 8;
        int temp;
        int[] arr = { 67, 11, 14, 34, 6, 10, 23, 13 };
        for (int i = 0; i < (n - 1); i++) {

            for (int j = 0; j < (n - 1); j++) {

                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int ele : arr) {
            System.out.println(ele);
        }
        }
}
public class bubblesort {
    void mostEfficient(){
        System.out.println("Most efficient one - ");
        int n = 5;
        int temp;
        int[] arr = { 5, 4, 3, 2, 1 };
        // for (int i = 0; i < (n - 1); i++) {
        //     boolean isSorted = true;
        //     for (int k = 0; k < (n - 1); k++) {
        //         if (arr[k] > arr[k + 1]) {
        //             isSorted = false;
        //             break;
        //         }
        //     }
        //     if (isSorted == true)
        //         break;
        //     for (int j = 0; j < (n - 1 - i); j++) {

        //         if (arr[j] > arr[j + 1]) {
        //             temp = arr[j];
        //             arr[j] = arr[j + 1];
        //             arr[j + 1] = temp;
        //         }
        //     }
        // }

        for (int i = 0; i < (n - 1); i++) {
           int swaps=0;
            for (int j = 0; j < (n - 1 - i); j++) {

                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swaps++;
                }
            }
            if(swaps==0) break;
        }

        for (int ele : arr) {
            System.out.println(ele);
        }
    }
    void moreEfficient() {
        System.out.println("More efficient one - ");
        int n = 5;
        int temp;
        int[] arr = { 5, 4, 3, 2, 1 };
        for (int i = 0; i < (n - 1); i++) {
            
            for (int j = 0; j < (n - 1 - i); j++) {

                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int ele : arr) {
            System.out.println(ele);
        }
    }

    void lessEfficient() {
        System.out.println("Less efficient one - ");
        int n = 8;
        int temp;
        int[] arr = { 67, 11, 14, 34, 6, 10, 23, 13 };
        for (int i = 0; i < (n - 1); i++) {

            for (int j = 0; j < (n - 1); j++) {

                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int ele : arr) {
            System.out.println(ele);
        }
    }

    public static void main(String[] args) {
        bubblesort bb = new bubblesort();
        // bb.moreEfficient();
        // bb.lessEfficient();
        descOrder d = new descOrder();
        d.sort();
    }
}