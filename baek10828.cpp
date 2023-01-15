#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	string str;
	int num;
	cin >> n;
	stack<int> st1;

	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push") {
			cin >> num;
			st1.push(num);
		}
		else if (str == "pop") {
			if (st1.empty())
				cout << "-1" << endl;
			else {
				cout << st1.top() << endl;
				st1.pop();
			}
		}
		else if (str == "size") {
			cout << st1.size() << endl;
		}
		else if (str == "empty") {
			if (st1.empty())
				cout << "1" << endl;
			else
				cout << "0" << endl;
		}
		else if (str == "top") {
			if (st1.empty())
				cout << "-1" << endl;
			else
				cout << st1.top() << endl;
		}


	}
}