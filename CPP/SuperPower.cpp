#include <iostream>
using namespace std;
/*
Input two numbers a and b . We need to calculate a power b. Both the numbers are integers.
	2 3 => 8
*/
int main(){
	int a, b, res = 1;
	cin >> a >> b;
	for(int i=1; i <=b; i++)
		res *= a;
	cout << res << endl;
	return 0;
}