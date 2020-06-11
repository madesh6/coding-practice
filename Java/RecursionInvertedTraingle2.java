import java.util.Scanner;

class RecursionInvertedTriangle2{
	static void printPattern(int n){
		if(n<1)
			return;
		for(int c = 1; c<=n; c++)
			System.out.print("*\t");
		System.out.println();
		printPattern(n-1);
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printPattern(n);
	}
}