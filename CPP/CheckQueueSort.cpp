#include<iostream>
#include<stack>
#include<queue>
using namespace std;
// Check if given queue can be sorted into other queue using one stack.
int main(int argc, char const *argv[])
{
	int n, front, expected = 1;
	bool canSort;
	cin >> n;
	queue<int> q1;
	for(int i = 0; i < n; i++){
		cin >> front;
		q1.push(front);
	}
	stack<int> stk;
	while(!q1.empty()){
		front = q1.front();
		q1.pop();
		if(front == expected) expected++;
		else{
			if(stk.empty())
				stk.push(front);
			else{
				if(!stk.empty() && front > stk.top()){ canSort = false; break;}
				else stk.push(front);
			}
		}
	}
	while(!stk.empty() && stk.top() == expected) {stk.pop(); expected++;}
	if(expected-1 == n && stk.empty()) canSort = true;
	else canSort = false;
	cout << boolalpha << canSort << endl;
	return 0;
}