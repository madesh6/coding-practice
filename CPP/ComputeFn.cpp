#include<iostream>
using namespace std;
/*
For a positive integer 'n' let's define a function:
f(n) =  - 1 + 2 - 3 + … + (( - 1)n)*n
Your task is to calculate f(n) for a given integer n.
*/

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin >> n;
		int odd_start = 1, even_start=2;
		long int odd_end, even_end, neven, nodd;	// sum => n(a+l)/2
		if(n%2){
			odd_end = n;
			even_end = n-1;
			nodd = n/2 + 1;
			neven = n/2;
		}
		else{
			odd_end = n-1;
			even_end = n;
			nodd = neven = n/2;
		}
		long int evenSum = neven*(even_start + even_end)/2;
		long int oddSum = nodd*(odd_start + odd_end)/2;
		cout << (evenSum - oddSum) << endl;
	}
	return 0;
}