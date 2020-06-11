import java.util.Scanner;

/*
	For every odd number row print 1, odd number of times and for every even number row, 
	print first and last character as 1 and rest of middle characters as 0.

						1 
						11
						111 
	n=6					1001 
						11111
						100001
*/

class ZeroOne{
	static void printPattern(int n){
		for(int r=1; r<=n; r++){
			if(r%2 != 0){
				for(int c =1; c<=r; c++)
					System.out.print(1);
			}
			else{
				for(int c = 1; c<=r; c++){
					if(c==1 || c==r){
						System.out.print(1);
					}
					else{
						System.out.print(0);
					}
				}
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