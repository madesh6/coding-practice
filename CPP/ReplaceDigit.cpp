#include <iostream>
#include <cmath>
using namespace std;
/*
Given an integer as a input and replace all the '0' with '5' in the integer
102 => 152 
*/
int main(int argc, char const *argv[])
{
	unsigned long int n ;
	cin >> n;
	if(n==0){
		cout << 5 << endl;
		return 0;
	}
	long int res = 0;
	int p = 0;
	while(n){
		short int rem = n % 10;
		if(rem ==  0)
			rem = 5;
		res += rem * pow(10, p++);
		n/=10;
	}
	cout << res << endl;
	return 0;
}