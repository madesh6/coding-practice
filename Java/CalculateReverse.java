import java.util.Scanner;
/* Take N as input, Calculate it's reverse also Print the reverse. */
class CalculateReverse{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		// 1. count the digits;
		int p = s.length()-1;
		long n = Long.parseUnsignedLong(s);
		long res = 0;
		while(n!=0){
			short rem = (short)(n%10);
			res += rem*Math.pow(10, p--);
			n/=10;
		}
		System.out.println(res);
	}
}