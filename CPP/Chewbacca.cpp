#include <iostream>
using namespace std;
/*
There are many numbers form after inverting the digit. 
For minimum number, check if inverting digit is less than or greater than the original digit. 
If it is less, then invert it otherwise leave it. 
*/

int main(){
	string s;
	cin >> s;
	char digit;
	for(int i = 0; i < s.size(); i++){
		digit = s[i] - '0';
		if(digit >= 5){
			s[i] = (9 - digit) + '0';
		}
	}
	if(s[0] == '0')
		s[0] = '9';
	cout << s << endl;
	return 0;
}