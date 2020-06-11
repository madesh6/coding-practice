import java.util.Scanner;

/*
	If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.
								1
								11
				n=5				202
								3003
								40004
*/

class ZeroNumber{
	static void printPattern(int n){
		if(n>=1){
			System.out.println(1);
			for(int r=2; r <=n; r++){
				for(int c=1; c<=r; c++){
					if(c==1 || c==r){
						System.out.print(r-1);
					}
					else{
						System.out.print(0);
					}
				}
				System.out.println();
			}
		}
	}
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		printPattern(n);
	}
}