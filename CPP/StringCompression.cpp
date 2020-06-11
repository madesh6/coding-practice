#include <iostream>
using namespace std;
/*
Take as input S, a string. Write a function that does basic string compression. 
Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.
*/
int main(){
	string s;
	cin >> s;
	string res = "";
	for(int i = 0; i < s.length();){
		int count = 1;
		for(int j = i+1; j < s.length(); j++){
			if(s[j] == s[i])
				count++;
			else
				break;
		}
		res += s[i] + to_string(count);
		i += count;
	}
	cout << res << endl;
	return 0;
}