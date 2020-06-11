#include<iostream>
using namespace std;

void printPattern(int n){
	if(n<1) return;
	printPattern(n-1);
	for(int c = 1; c <=n ;c++){
		cout << "*\t";
	}
	cout << endl;
}

int main(){
	int n = 5;
	//cin >> n;
	printPattern(n);
	return 0;
}