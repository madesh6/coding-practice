#include <iostream>
using namespace std;
/*
Each number is separated from other by a tab. For given input n,
You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.
			0 
	n=4		1    1 
			2    3     5 
			8   13    21    34
*/

int main(){
	int n;
	cin >> n;
	long int asize = n*(n+1)/2;
	long int arr[asize];
	arr[0]= 0; arr[1] = 1;
	for(long int i = 2; i < asize; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	for(long int r=1, k=0; r <=n; r++){
		for(int c = 1; c <=r; c++,k++){
			cout << arr[k] << "\t";
		}
		cout << endl;
	}
	return 0;
}