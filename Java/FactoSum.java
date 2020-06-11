import java.util.Scanner;
/*
Given N numbers, calculate sum of their factorial modulo 107. (Note it is not 10^7)
Input:  3			Output: 43
		3 4 5
*/

class FactoSum{
	static int factorial(int n){
		int res = 1;
		for(int i = 2; i <= n; i++)
			res = (res*i)%107;
		return res;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		int s = 0;
		while(t-- > 0){
			int n = sc.nextInt();
			s += factorial(n);
		}
		System.out.println(s%107);
	}
}