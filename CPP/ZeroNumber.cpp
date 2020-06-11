#include<iostream>
using namespace std;

/*
	If row number is n (>1), total character is n. First and last character is n-1 and rest are 0.
								1
								11
				n=5				202
								3003
								40004
*/

void printPattern(int n){
	if(n>=1){
		cout << 1 << endl;
		for(int r=2; r<=n; r++){
			for(int c=1; c<=r; c++){
				if(c==1||c==r)
					cout << r-1;
				else
					cout << 0;
			}
			cout << endl;
		}
	}
}
int main(){
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}