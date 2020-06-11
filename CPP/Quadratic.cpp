#include<iostream>
#include <cmath>
using namespace std;
/*
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots.
If Real and Distinct , print the roots in increasing order.
If Real and Equal , print the same repeating root twice
If Imaginary , no need to print the roots.		ax^2+b^x+c

Input: 1 -11 28 Output: Real and Distinct
		a  b c			4 7
*/
int main(){
	int a,b,c,r1,r2;
	cin >> a >> b >> c;
	int discriminant = (b*b - 4*a*c);
	r1 = (-b + sqrt(discriminant))/2*a;
	r2 = (-b - sqrt(discriminant))/2*a;
	if(discriminant > 0){
		cout << "Real and Distinct" << endl;
		cout << min(r1,r2) << " " << max(r1,r2) << endl;
	}
	else if(discriminant == 0){
		cout << "Real and Equal" << endl;
		cout << r1 << " " << r2 << endl;

	}
	else{
		cout << "Imaginary" << endl;
	}
	return 0;
}