#include<iostream>
using namespace std;
/*
									*********
									**** ****
									***   ***
									**     **
									*       *
									**     **
									***   ***
									**** ****
									*********
*/
void printUpper(int n){
	for(int r = 1; r <=n ; r++){
		for(int c = 1; c <= n-r+1; c++){
			if(c == n-r+1 && r==1)
				break;
			cout << '*';
		}
		for(int c = 1; c < 2*r-2; c++){
			cout << ' ';
		}
		for(int c = 1; c <=n-r+1 ;c++){
			cout << '*';
		}
		cout << endl;
	}
}

void printLower(int n){
	for(int r = 2; r <=n ; r++){
		for(int c = 1; c <=r; c++){
			cout << '*';
		}
		for(int c=1; c<=2*(n-r)-1; c++){
			cout << ' ';
		}
		for(int c = 1; c<=r; c++){
			if(r == n  & c == n)
				break;
			cout << "*";
		}
		cout << endl;
	}
}

void hollowDiamond(int n){
	printUpper(n);
	printLower(n);
}

int main(){
	int n ;
	cin >> n;
	hollowDiamond(n);
	return 0;
}