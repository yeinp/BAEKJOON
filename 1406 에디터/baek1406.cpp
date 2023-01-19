#include <iostream>
#include <stack>
using namespace std;

int main() {
	string str = "";
	cin >> str; //문자열 입력
	int n;
	cin >> n; //입력할 명령어 개수
	
	stack<char> left; //커서 왼쪽 스택
	stack<char> right; //커서 오른쪽 스택

	for (int i = 0; i < str.size() ; i++) {
		left.push(str[i]);
	}

	while (n--) {
		{
			char c;
			cin >> c;
			if (c == 'L') {
				if (left.empty())
					continue;
				else {
					right.push(left.top());
					left.pop();
				}
			}
			else if (c == 'B') {
				if (left.empty())
					continue;
				else
					left.pop();
			}
			else if (c == 'P') {
				char c2;
				cin >> c2;
				left.push(c2);
			}
			else if (c == 'D') {
				if (right.empty())
					continue;
				else {
					left.push(right.top());
					right.pop();
				}
			}
		}
	}

	while (!left.empty()) { 
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) { //left로 하면 뒷자리부터 출력됨
		cout << right.top();
		right.pop();
	}


}
