#include <iostream>
#include <cmath>
using namespace std;
/*
	101 - 5
	111 - 7
	1111111111111111 - 65535
*/
int main(){
	unsigned long int n, res = 0;
	cin >> n;
	int p = 0;
	while(n){
		int rem = n % 10;
		res += rem*pow(2, p);
		n /=10;
		p++;
	}
	cout << res << endl;
}