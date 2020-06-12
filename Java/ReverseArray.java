import java.util.Scanner;
/*
Take as input N, the size of array.
Take N more inputs and store that in an array. Write a function that reverses the array.
Print the values in reversed array.
Input:			Output:
5				9 8 6 4 0 
0 4 6 8 9
*/
class ReverseArray{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long[] arr = new long[n];
		for(int i = 0; i < n; i++)
			arr[i] = sc.nextLong();
		int s = 0, e = n-1;
		while(s<e){
			arr[s] = arr[s] ^ arr[e];
			arr[e] = arr[s] ^ arr[e];
			arr[s] = arr[s] ^ arr[e];
			s++;
			e--;
 		}
 		for(int i = 0; i < n; i++){
			System.out.print(arr[i] + " ");
		}
		System.out.println();
	}
}