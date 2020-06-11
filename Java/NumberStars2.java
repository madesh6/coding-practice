import java.util.Scanner;
/*
				 1******
				 12*****
		n=7		 123****
				 1234***
				 12345**
				 123456*
				 1234567
 */
class NumberStars2{
	public static void main(String... args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int r=1; r<=n; r++){
			for(int c=1; c<=r; c++)
				System.out.print(c);
			for(int st=1; st <= n-r; st++)
				System.out.print('*');
			System.out.println();
		}
	}
}