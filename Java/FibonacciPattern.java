import java.util.Scanner;
import java.math.BigInteger;
/*
Each number is separated from other by a tab. For given input n,
You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
			0 
	n=4		1    1 
			2    3     5 
			8   13    21    34
*/

class FibonacciPattern{
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int asize = (n*(n+1))/2;
		BigInteger[] arr = new BigInteger[asize];
		arr[0] = BigInteger.valueOf(0);
		arr[1] = BigInteger.valueOf(1);
		for(int i = 2; i < asize; i++)
			arr[i] = arr[i-1].add(arr[i-2]);
		int k = 0;
		for(int r=1; r<=n; r++){
			for(int c=1; c <=r; c++){
				System.out.print(arr[k++] + "\t");
			}
			System.out.println();
		}
	}
}