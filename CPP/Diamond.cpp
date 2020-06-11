#include <iostream>
using namespace std;
/*
							   	  *
							    * * *
	n=5						  * * * * *
							    * * *
							      *
*/

void printFirstHalf(int n){
	for(int r=1; r<=n; r++){
		for(int s = 1; s<=n-r; s++)
			cout << "  ";
		for(int c = 1; c<= 2*r-1; c++)
			cout << "* ";
		cout << endl;
	}
}

void printSecondHalf(int n){
	int hn = (n/2);
	int x = 0;
	for(int r = hn + 2, cr = 1; r <=n && cr<=hn ; r++, cr++){
		x+=2;
		for(int s = 1; s<= cr; s++){
			cout << "  ";
		}
		for(int c = 1; c<= n-x; c++){
			cout << "* ";
		}
		cout << endl;
	}
}

void printPattern(int n){
	printFirstHalf((n/2)+1);
	printSecondHalf(n);
}

int main(){
	int n;
	cin >> n;
	printPattern(n);
	return 0;
}