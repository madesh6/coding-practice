#include <iostream>
using namespace std;
/* Given a list of numbers, 
	stop processing input after the cumulative sum of all the input becomes negative.
input:	1			output:	1
		2					2
		88					88
		-100
		49
*/
int main(){
	int n;
	int csum = 0;
	while(1){
		cin >> n;
		csum += n;
		if(csum < 0)
			break;
		else
			cout << n << endl;
	}
	return 0;
}