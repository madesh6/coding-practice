import java.util.Scanner;
/*
Input two numbers a and b . We need to calculate a power b. Both the numbers are integers.
	2 3 => 8
*/
class SuperPower{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int res = 1;
		// multiply 'a' with itself 'b' times
		for(int i = 1; i <= b; i++)
			res = res*a;
		System.out.println(res);
	}
}