import java.util.Scanner;
/*
	n=5;
					5
					3
					1
					2
					4
*/

class R2Pattern{
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i = n; i >= 1; i--){
			if(i%2 != 0)
				System.out.println(i);
		}
		for(int i = 2; i <= n; i++){
			if(i%2==0)
				System.out.println(i);
		}
	}
}