#include <iostream>
#include <cmath>
using namespace std;
/* Take N as input, Calculate it's reverse also Print the reverse. */
int main(int argc, char const *argv[])
{
	unsigned long int n, t, res = 0;
	cin >> n;
	t = n;
	int p = 0;
	while(t){
		t/=10;
		p++;
	}
	p-=1;

	while(n){
		short int rem = n % 10;
		res += rem*pow(10, p--);
		n/=10;
	}
	cout << res << endl;
	return 0;
}