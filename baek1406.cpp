#include <iostream>
#include <stack>
using namespace std;

int main() {
	string str = "";
	cin >> str; //���ڿ� �Է�
	int n;
	cin >> n; //�Է��� ��ɾ� ����
	
	stack<char> left; //Ŀ�� ���� ����
	stack<char> right; //Ŀ�� ������ ����

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
	while (!right.empty()) { //left�� �ϸ� ���ڸ����� ��µ�
		cout << right.top();
		right.pop();
	}


}