import java.util.Scanner;

class Chewbacca{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String r = "";
		for(int i = 0; i < s.length(); i++){
			int digit = s.charAt(i) - '0';
			if(digit >= 5 && digit < 9){
				r = r + (9-digit);
			}	
			else if( digit < 9)
				r += s.charAt(i);
			else
				r += 9;
		}
		System.out.println(r);
	}
}