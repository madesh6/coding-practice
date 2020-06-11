import java.util.Scanner;
/*
							   	  *
							    * * *
	n=5						  * * * * *
							    * * *
							      *
*/

class Diamond{
	static void printFirstHalf(int n){
		for(int r = 1; r <=n ; r++){
			for(int s = 1; s <= n-r; s++)
				System.out.print("  ");
			for(int c = 1; c <= 2*r-1; c++)
				System.out.print("* ");
			System.out.println();
		}
	}
	static void printSecondHalf(int n){
		int hn = (n/2);
		int x = 0;
		for(int r = hn+2, cr =1; r <=n && cr <= hn; r++, cr++){
			x+=2;
			for(int s = 1; s<=cr; s++)
				System.out.print("  ");
			for(int c = 1; c<=n-x; c++)
				System.out.print("* ");
			System.out.println();
		}
	}
	static void printDiamond(int n){
		printFirstHalf((n/2)+1);
		printSecondHalf(n);
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printDiamond(n);
	}
}