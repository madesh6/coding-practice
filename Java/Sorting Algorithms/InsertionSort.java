import java.util.Scanner;
class InsertionSort{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++){
			arr[i] = sc.nextInt();
		}
		for(int i = 1; i < n; i++){
			int hole = i-1;
			int element = arr[i];
			while(hole >= 0 && arr[hole] > element){
				arr[hole+1] = arr[hole];
				hole--;
			}
			arr[hole+1] = element;
		}
		for(int a : arr)
			System.out.print(a + " ");
	}
}