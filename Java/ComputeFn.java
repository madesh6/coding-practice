import java.util.Scanner;
/*
For a positive integer 'n' let's define a function:
f(n) =  - 1 + 2 - 3 + … + (( - 1)n)*n
Your task is to calculate f(n) for a given integer n.
*/
class ComputeFn{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long t = sc.nextLong();
		while(t-- > 0){
			long n = sc.nextLong();
			int even_start = 2, odd_start = 1;
			long even_end, odd_end, neven, nodd;
			if(n%2 != 0){
				nodd = n/2 + 1;
				neven = n/2;
				odd_end = n;
				even_end = n-1;
			}
			else{
				nodd = neven = n/2;
				odd_end = n-1;
				even_end = n;
			}
			long evenSum = neven*(even_start + even_end)/2;
			long oddSum = nodd*(odd_start + odd_end)/2;
			System.out.println(evenSum - oddSum);
		}
	}
}