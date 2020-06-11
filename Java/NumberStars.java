import java.util.Scanner;
/*
				1 2 3 4 5 
				1 2 3 4 * 
	n=5			1 2 3 * * * 
				1 2 * * * * * 
				1 * * * * * * *
*/
class NumberStars{
	static void printPattern(int n){
		int x = -3;
		for(int r=1; r<=n; r++){
			x+=2;
			for(int c=1; c<=n-r+1; c++){
				System.out.print(c + " ");
			}
			for(int c=1; c<=x; c++){
				System.out.print("* ");
			}
			System.out.println();
		}
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printPattern(n);
	}
}