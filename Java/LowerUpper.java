import java.util.Scanner;
/*
	a - lowercase
	A - UPPERCASE
	$ - Invalid
*/
class LowerUpper{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		char ch = sc.next().charAt(0);
		if('a' <= ch && ch <= 'z')
			System.out.println("lowercase");
		else if('A' <= ch && ch <= 'Z')
			System.out.println("UPPERCASE");
		else
			System.out.println("Invalid");
	}
}