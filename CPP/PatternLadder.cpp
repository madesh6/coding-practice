#include <iostream>
using namespace std;
/*
					1	
	n=4				2	3	
					4	5	6	
					7	8	9	10
*/

int main(){
	int n;
	cin >> n;
	for(int r = 1, x=1; r<=n; r++){
		for(int c = 1; c<=r; c++, x++){
			cout << x << '\t';
		}
		cout << endl;
	}
	return 0;
}