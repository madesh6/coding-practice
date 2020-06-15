import java.util.Scanner;
class MergeSort{
	static void merge(int[] arr, int[] a, int an, int[] b, int bn){
		int i = 0, j = 0, k = 0;
		//int[] arr = new int[an+bn];
		while(i < an && j < bn){
			if(a[i] < b[j]){
				arr[k++] = a[i++];
			}
			else{
				arr[k++] = b[j++];
			}
		}
		while(i < an) arr[k++] = a[i++];
		while(j < bn) arr[k++] = b[j++];
 	}
 	static void mergeSort(int[] arr, int n){
 		if(n <2) return;
 		int mid = n/2;
 		int a[] = new int[mid];
 		int b[] = new int[n-mid];
 		for(int i = 0; i < mid; i++)
 			a[i] = arr[i];
 		for(int i = mid; i < n; i++)
 			b[i-mid] = arr[i];
 		mergeSort(a, mid);
 		mergeSort(b, n-mid);
 		merge(arr, a, mid, b, n-mid);
 	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		for(int i = 0; i < n; i++){
			arr[i] = sc.nextInt();
		}
		mergeSort(arr, n);
		for(int a : arr)
			System.out.print(a + " ");
	}
}