import java.util.Scanner;
/*
	101 - 5
	111 - 7
	1111111111111111 - 65535
*/
class BinaryToDecimal{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		long n = Long.parseUnsignedLong(s);
		int res = 0, p = 0;
		while(n!=0){
			short rem = (short)(n % 10);
			res += rem*Math.pow(2, p++);
			n /= 10;
		}
		System.out.println(res);
	}
}