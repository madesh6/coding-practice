import java.util.Scanner;
/*
Take as input S, a string. Write a function that does basic string compression. 
Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
*/
class StringCompression{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String res = "";
		for(int i = 0; i < s.length();){
			int count = 1;
			for(int j = i+1; j < s.length(); j++){
				if(s.charAt(j) == s.charAt(i))
					count++;
				else
					break;
			}
			res += "" +s.charAt(i)+count;
			i +=count;
		}
		System.out.println(res);
	}
}