#include<iostream>
using namespace std;
/*
Take as input N, the size of array.
Take N more inputs and store that in an array. Write a function that reverses the array.
Print the values in reversed array.
Input:			Output:
5				9 8 6 4 0 
0 4 6 8 9
*/
int main(){
	long int n;
	cin >> n;
	long int *arr = new long int[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	long int s = 0, e = n-1;
	while(s<e){
		swap(arr[s++], arr[e--]);
	}
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}