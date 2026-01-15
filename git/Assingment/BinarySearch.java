import java.util.Scanner;
import java.until.Arrays;

public class BinarySearch {

    static int BinarySearch1(int arr[],int tar){
        Arrays.sort(arr);
        int left=0;
        int right=arr.length-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(arr[mid]==tar){
                return mid;
            }
            else if(arr[mid]<tar){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
    }




    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the length of array");
        int arr[]=new int[in.nextInt()];
        System.out.println("Enter the array elements");
        for(int i=0;i<arr.length;i++){
            arr[i]=in.nextInt();
        }
        System.out.println("Enter the target element");
        int tar = in.nextInt();
        int ans = BinarySearch1(arr, tar);
        if(ans>=0){
            System.out.println("The element is found at index "+ans);
        }
        else{
            System.out.println("The element is not found");
        }
    }

}
