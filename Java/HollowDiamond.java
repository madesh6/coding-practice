import java.util.Scanner;
/*
					*********
					**** ****
					***   ***
	n=5				**     **
					*       *
					**     **
					***   ***
					**** ****
					*********
*/
class HollowDiamond{
	static void hollowDiamond(int n){
		printUpper(n);
		printLower(n);
	}
	static void printUpper(int n){
		for(int r = 1; r <= n; r++){
			for(int c=1; c<=n-r+1; c++){
				if(r==1 && c == n-r+1)
					break;
				System.out.print('*');
			}
			for(int c=1; c < 2*r-2; c++){
				System.out.print(' ');
			}
			for(int c=1; c <= n-r+1; c++){
				System.out.print('*');
			}
			System.out.println();
		}
	}
	static void printLower(int n){
		for(int r = 2; r <=n; r++){
			for(int c=1; c<=r; c++){
				System.out.print('*');
			}
			for(int c=1; c<= 2*(n-r)-1; c++){
				System.out.print(' ');
			}
			for(int c=1; c <=r; c++){
				if(r == n && c == n)
					break;
				System.out.print('*');
			}
			System.out.println();
		}
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		hollowDiamond(n);
	}
}