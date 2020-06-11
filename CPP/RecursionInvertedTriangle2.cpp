#include <iostream>
using namespace std;

void printPattern(int n){
	if(n < 1)
		return;
	for(int c = 1; c <=n; c++)
		cout << "*\t";
	cout << endl;
	printPattern(n-1);
}

int main(){
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}