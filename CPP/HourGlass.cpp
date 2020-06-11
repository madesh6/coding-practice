#include <iostream>
using namespace std;
/*
			 5 4 3 2 1 0 1 2 3 4 5
			   4 3 2 1 0 1 2 3 4 
			     3 2 1 0 1 2 3 
			       2 1 0 1 2 
n=5			         1 0 1 
			           0 
			         1 0 1 
			       2 1 0 1 2 
			     3 2 1 0 1 2 3 
			   4 3 2 1 0 1 2 3 4 
			 5 4 3 2 1 0 1 2 3 4 5
 */

void printUpper(int n){
	for(int r = 1; r<=n+1; r++){
		for(int s = 1; s<r; s++){
			cout << "  ";
		}
		for(int c= n-r+1; c>=0; c--){
			cout << c << " ";
		}
		for(int c = 1; c<= n-r+1; c++){
			cout << c << " ";
		}
		cout << endl;
	}
}

void printLower(int n){
	for(int r = 2; r<=n+1; r++){
		for(int s = 1; s<=n-r+1; s++){
			cout << "  ";
		}
		for(int c = r-1; c>=0; c--){
			cout << c << " ";
		}
		for (int c= 1; c < r; c++)
		{
			cout << c << " ";
		}
		cout << endl;
	}
}
int main(){
	int n;
	cin >> n;
	printUpper(n);
	printLower(n);
	return 0;
}