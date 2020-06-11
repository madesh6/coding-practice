import java.util.Scanner;
/*
			 5 4 3 2 1 0 1 2 3 4 5
			   4 3 2 1 0 1 2 3 4 
			     3 2 1 0 1 2 3 
			       2 1 0 1 2 
n=5			         1 0 1 
			           0 
			         1 0 1 
			       2 1 0 1 2 
			     3 2 1 0 1 2 3 
			   4 3 2 1 0 1 2 3 4 
			 5 4 3 2 1 0 1 2 3 4 5
 */

class HourGlass{
	static void printUpper(int n){
		for(int r=1; r <=n+1; r++){
			for(int s=1; s<r; s++)
				System.out.print("  ");
			for(int c=n-r+1; c >=0; c--)
				System.out.print(c + " ");
			for(int c = 1; c<=n-r+1; c++)
				System.out.print(c + " ");
			System.out.println();
		}
	}
	static void printLower(int n){
		for(int r=2; r <=n+1; r++){
			for(int s=1; s<=n-r+1; s++)
				System.out.print("  ");
			for(int c=r-1; c>=0; c--)
				System.out.print(c + " ");
			for(int c=1; c<r; c++)
				System.out.print(c + " ");
			System.out.println();
		}
	}
	static void printHourGlass(int n){
		printUpper(n);
		printLower(n);
	}

	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printHourGlass(n);
	}
}