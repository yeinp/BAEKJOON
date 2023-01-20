#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;

	list<char> l1;
	list<char>::iterator cursor; //for문 돌아갈 때 자동으로 다음 주소로 가있음

	while (n--) {
		cin >> str;
		l1.clear();
		cursor = l1.begin();

		for (int i = 0; i < str.length(); i++) {

			if (str[i] == '<') {
				if (cursor != l1.begin())
					cursor--;
				else
					continue;
			}

			else if (str[i] == '>') {
				if (cursor != l1.end())
					cursor++;
				else
					continue;
			}

			else if (str[i] == '-')
				if (cursor != l1.begin()) {
					cursor = l1.erase(--cursor); //지금 커서의 앞의 문자를 지운다
				}
				else
					continue;

			else
				l1.insert(cursor, str[i]);
		}
		for (cursor = l1.begin(); cursor != l1.end(); cursor++)
			cout << *cursor; //cursor->주소를 담고 있음, *->주소를 참조해서 값을 가져옴
		cout << "\n";

	}
}