import java.util.Scanner;
/* Given a list of numbers, 
	stop processing input after the cumulative sum of all the input becomes negative.
input:	1			output:	1
		2					2
		88					88
		-100
		49
*/
class SimpleInput{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int cumulativeSum = 0;
		int num;
		while(true){
			num = sc.nextInt();
			cumulativeSum += num;
			if(cumulativeSum < 0)
				break;
			else
				System.out.println(num);
		}
	}
}