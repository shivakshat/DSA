import java.util.Arrays;
public class pair_with_given_sum {
    static  int find_pair(){
        int[] arr = { 1, 2, 3, 4, 5, 6 };
        int n = arr.length;
        Arrays.sort(arr); //TC - nlogn  SC - N
        int i=0, j = arr.length-1, target=5;
        while(i<j){ //time - n
            if((arr[i]+arr[j])==target) return arr[i]+arr[j];
            else if((arr[i]+arr[j])>target) j-- ;
            else if((arr[i]+arr[j])<target) i++ ;
        }
        return 0;
    }
    public static void main(String[] args) {
        System.out.println(pair_with_given_sum.find_pair());
    }
}