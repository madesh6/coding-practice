#include <iostream>
using namespace std;
/*
Given N numbers, calculate sum of their factorial modulo 107. (Note it is not 10^7)
Input:  3			Output: 43
		3 4 5
*/

int factorial(int n){
	int res = 1;
	for(int i = 2; i <=n; i++)
		res = (res * i)%107;
	return res;
}

int main(){
	int t, s = 0;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		s += factorial(n);
	}
	cout << s % 107<< endl;
	return 0;
}