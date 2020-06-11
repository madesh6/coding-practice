#include <iostream>
using namespace std;
/*
	a - lowercase
	A - UPPERCASE
	$ - Invalid
*/

int main(){
	char ch;
	cin >> ch;
	if('a' <= ch && ch <= 'z')
		cout << "lowercase" << endl;
	else if('A' <= ch && ch <= 'Z')
		cout << "UPPERCASE" << endl;
	else
		cout << "Invalid" << endl;
	return 0;
}