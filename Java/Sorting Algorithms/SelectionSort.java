import java.util.Scanner;
class SelectionSort{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++){
			arr[i] = sc.nextInt();
		}
		for(int i = 0; i < n; i++){
			int minIndex = i;
			for(int j = i+1; j < n; j++){
				if(arr[j] < arr[minIndex])
					minIndex = j;
			}
			if(minIndex > i){
				arr[i] = arr[i] ^ arr[minIndex];
				arr[minIndex] = arr[i] ^ arr[minIndex];
				arr[i] = arr[i] ^ arr[minIndex];
			}
		}
		for(int a : arr)
			System.out.print(a + " ");
	}
}