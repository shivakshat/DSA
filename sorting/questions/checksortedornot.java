public class checksortedornot{
   public boolean check(){

        int n=5;
        int[] arr={2,1,3,4,5};
        
        for(int i=0;i<(n-1);i++){
            if(arr[i]>arr[i+1]){ return false;}
        }
        return true;
    }
    public static void main(String[] args){
        checksortedornot c=new checksortedornot();
        System.out.println(c.check());
    }
}