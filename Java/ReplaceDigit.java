import java.util.Scanner;
/*
Given an integer as a input and replace all the '0' with '5' in the integer
102 => 152 
*/
class ReplaceDigit{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		if(n == 0){
			System.out.println(5);
			return;
		}
		long res = 0;
		int p = 0;
		while(n!=0){
			Short rem = (short)(n % 10);
			if(rem == 0)
				rem = 5;
			res += rem*Math.pow(10, p++);
			n/=10;
		}
		System.out.println(res);
	}
}