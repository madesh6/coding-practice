#include <iostream>
using namespace std;
/*
				 1******
				 12*****
		n=7		 123****
				 1234***
				 12345**
				 123456*
				 1234567
 */

int main(){
	int n;
	cin >> n;
	for(int r = 1; r<=n; r++){
		for(int c=1; c<=r; c++){
			cout << c ;
		}
		for(int st=1; st <= n-r; st++){
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}