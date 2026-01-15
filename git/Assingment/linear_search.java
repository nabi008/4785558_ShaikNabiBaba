package array_java;

public class linear_search {
    public static void main(String[] args) {
        int [] nums = {5,7,8,6,2};
        System.out.println(linearSearch1(nums,10));
    }

    static int linearSearch(int[] arr,int x){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }

    static int linearSearch1(int[] arr,int x){
        if(arr.length==0){
            return -1;
        }

        for(int n:arr){
            if(n==x){
                return n;
            }
        }
        return Integer.MAX_VALUE;
    }
}
