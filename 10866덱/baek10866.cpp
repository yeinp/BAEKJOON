#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n;
	cin >> n;

	deque <int> d;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push_front") {
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (str == "push_back") {
			int num2;
			cin >> num2;
			d.push_back(num2);
		}
		else if (str == "pop_front") {
			if (d.empty())
				cout << "-1" << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (d.empty())
				cout << "-1" << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (str == "size")
			cout << d.size() << "\n";
		else if (str == "empty") {
			if (d.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (str == "front") {
			if (d.empty())
				cout << "-1" << "\n";
			else
				cout << d.front() << "\n";
		}
		else if (str == "back") {
			if (d.empty())
				cout << "-1" << "\n";
			else
				cout << d.back() << "\n";
		}

	}
}
