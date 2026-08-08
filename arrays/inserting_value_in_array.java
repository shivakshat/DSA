import java.util.Scanner;
public class inserting_value_in_array{
    static Scanner sc = new Scanner(System.in);
    void atSpecificPlace(){
        
        System.out.println("Enter number of elements of array:");
        int n = sc.nextInt();
        System.out.println("Enter position at which element is to be inserted :");
        int x = sc.nextInt();
        int[] arr = new int[30];
        for(int i = 0;i<n;i++){
            System.out.println("Enter element " + (i+1));
            arr[i] = sc.nextInt();
        }
        for(int i = n;i>x;i--){
            arr[i] = arr[i-1];
        }
        arr[x] = 100;
        n++;
        for(int i = 0;i<n;i++){
            String result = String.format("Index = %d Value = %d",i,arr[i]);
            System.out.printf(result + "\n");
        }
    }
    void atBeginning(){
        
        System.out.println("Enter number of elements of array:");
        int n = sc.nextInt();
        int[] arr = new int[30];
        for(int i = 0;i<n;i++){
            System.out.println("Enter element " + (i+1));
            arr[i] = sc.nextInt();
        }
        for(int i = n;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = 100;
        n++;
        for(int i = 0;i<n;i++){
            String result = String.format("Index = %d Value = %d",i,arr[i]);
            System.out.printf(result + "\n");
        }
    }
    void atEnd(){
        
        System.out.println("Enter number of elements of array:");
        int n = sc.nextInt();
        int[] arr = new int[30];
        for(int i = 0;i<n;i++){
            System.out.println("Enter element " + (i+1));
            arr[i] = sc.nextInt();
        }
        arr[n] = 100;
        n++;
        for(int i = 0;i<n;i++){
            String result = String.format("Index = %d Value = %d",i,arr[i]);
            System.out.printf(result + "\n");
        }
    }
    public static void main(String[] args) {
        inserting_value_in_array iv = new inserting_value_in_array();
        // iv.atBeginning();
        // iv.atEnd();
        iv.atSpecificPlace();
        
    }
}