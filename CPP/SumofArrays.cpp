#include<iostream>
using namespace std;
/*
		4
		1 0 2 9
		5							3, 5, 5, 9, 6, END
		3 4 5 6 7
*/
int main(int argc, char const *argv[])
{
	int n1,n2;
	cin >> n1;
	int arr1[n1];
	for(int i = n1-1; i >= 0; i--)
		cin >> arr1[i];
	cin >> n2;
	int arr2[n2];
	for(int i = n2-1; i >=0; i--)
		cin >> arr2[i];
	int index = 0, carry = 0;
	int nsize;
	if(abs(n2-n1) == 1)
		nsize = max(n2,n1)+1;
	else
		nsize = max(n1, n2);
	int arr[nsize];
	while(index < nsize){
		if(index < n1 && index < n2)
			arr[index] = arr1[index] + arr2[index] + carry;
		else if(index >= n1)
			arr[index] = arr2[index] + carry;
		else if(index >= n2)
			arr[index] = arr1[index] + carry;
		else
			arr[index] = carry;
		carry = arr[index]/10;
		arr[index] %=10;
		index++;
	}
	while(arr[--nsize] == 0);
	for(int i = nsize; i >=0; i--){
		cout << arr[i] << ", ";
	}
	cout << "END" << endl;
	return 0;
}