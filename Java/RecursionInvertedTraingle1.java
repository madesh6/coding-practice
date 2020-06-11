import java.util.Scanner;

class RecursionInvertedTriangle1{
	static void printPattern(int n){
		if(n<1) return;
		printPattern(n-1);
		for(int c=1; c<=n; c++){
			System.out.print("*\t");
		}
		System.out.println();
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printPattern(n);
	}
}
