import java.util.Scanner;

class QuickSort{
	static int partitionF(int[] arr, int s, int e){
		int pivot = arr[s];
		int partitionIndex = s;
		int temp;
		for(int i = s+1; i <= e; i++){
			if(arr[i] < pivot){
				partitionIndex++;
				temp = arr[i];
				arr[i] = arr[partitionIndex];
				arr[partitionIndex] = temp;
			}
		}
		arr[s] = arr[partitionIndex];
		arr[partitionIndex] = pivot;
		return partitionIndex;
	}
	static int partitionL(int[] arr, int s, int e){
		int pivot = arr[e];
		int partitionIndex = s-1;
		int temp;
		for(int i = s; i < e; i++){
			if(arr[i] < pivot){
				partitionIndex++;
				temp = arr[i];
				arr[i] = arr[partitionIndex];
				arr[partitionIndex] = temp;
			}
		}
		arr[e] = arr[partitionIndex+1];
		arr[partitionIndex+1] = pivot;
		return partitionIndex+1;
	}
	static void quickSort(int[] arr, int s, int e){
		if(s >= e) return;
		int partitionIndex = partitionF(arr, s, e);
		quickSort(arr, s, partitionIndex-1);
		quickSort(arr, partitionIndex+1, e);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++)
			arr[i] = sc.nextInt();
		quickSort(arr, 0, n-1);
		for(int i : arr){
			System.out.print(i + " ");
		}
		System.out.println();
	}
}