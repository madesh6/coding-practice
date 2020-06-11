import java.util.Scanner;
/*
					1	
	n=4				2	3	
					4	5	6	
					7	8	9	10
*/

class PatternLadder{
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int x = 1;
		for(int r = 1; r <=n; r++){
			for(int c = 1; c<=r; c++, x++){
				System.out.print(x+"\t");
			}
			System.out.println();
		}
	}
}