#include <iostream>
using namespace std;
/*
	n=5;
					5
					3
					1
					2
					4
*/

int main(){
	int n;
	cin >> n;
	for(int i = n; i>=1; i--){
		if(i%2)
			cout << i << endl;
	}
	for(int i = 2; i <= n; i++){
		if(i%2 == 0)
			cout << i << endl;
	}
	return 0;
}