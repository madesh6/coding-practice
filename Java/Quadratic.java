import java.util.Scanner;
/*
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.		ax^2+b^x+c

Input: 1 -11 28 Output: Real and Distinct
		a  b c			4 7
*/

class Quadratic{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int discriminant = (b*b-4*a*c);
		int r1 = (int)((-b + Math.sqrt(discriminant))/2*a);
		int r2 = (int)((-b - Math.sqrt(discriminant))/2*a);
		if(discriminant > 0){
			System.out.println("Real and Distinct");
			System.out.println(Math.min(r1,r2) + " " + Math.max(r1,r2));
		}
		else if(discriminant == 0){
			System.out.println("Real and Equal");
			System.out.println(r1 + " " + r2);
		}
		else{
			System.out.println("Imaginary");
		}
	}
}