#include <iostream>
using namespace std;
/*
	For every odd number row print 1, odd number of times and for every even number row, 
	print first and last character as 1 and rest of middle characters as 0.

						1 
						11
						111 
	n=6					1001 
						11111
						100001
*/

void printPattern(int n){
	for(int r=1; r<=n; r++){
		if(r%2){
			for(int c=1; c<=r; c++)
				cout << '1';
		}
		else{
			for(int c=1; c<=r; c++){
				if(c==1 || c== r)
					cout << '1';
				else
					cout << '0';
			}
		}
		cout << endl;
	}
}

int main(){
	int n = 6;
	printPattern(n);
	return 0;
}