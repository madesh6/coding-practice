#include<iostream>
using namespace std;
/*
					1 2 3 4 5
	n=5				1 2 3 4 * 
					1 2 3 * * *
					1 2 * * * * *
					1 * * * * * * *
*/

void printPattern(int n){
	int x = -3;
	for(int r=1; r<=n; r++){
		x += 2;
		for(int c=1; c <= n-r+1; c++){
			cout << c << ' ';
		}
		for(int c=1; c <= x; c++){
			cout << "* ";
		}
		cout << endl;
	}
}

int main(){
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}