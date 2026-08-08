import java.util.ArrayList;
// class Solution {
//     void pushZerosToEnd(int[] arr) {
//         ArrayList<Integer> ar=new ArrayList<Integer>();
//         int countZero=0;
//         for(int i=0;i<arr.length;i++){
//             if(arr[i]!=0) ar.add(arr[i]);
//             else{countZero++;}
//         }
//         for(int i=0;i<countZero;i++){
//             ar.add(0);
//         }
//         for(int ele:ar){
//             System.out.print(ele+" ");
//         }
//     }
// }
class Solution {
    void pushZerosToEnd(int[] arr) {
       for(int i=0;i<arr.length-1;i++){
           for(int j=0;j<arr.length-1;j++){
               if(arr[j]==0){
                   int temp=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=temp;
               }
           }
       }
        for(int ele:arr){
            System.out.print(ele+" ");
        }
    }
}
public class zerotoend{
    public static void main(String[] args) {
        Solution sol = new Solution();
        int[] arr={2,0,1,0,3,0,4,0,5};
        sol.pushZerosToEnd(arr);

        
    }
}