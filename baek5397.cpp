#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;

	list<char> l1;
	list<char>::iterator cursor; //for�� ���ư� �� �ڵ����� ���� �ּҷ� ������

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
					cursor = l1.erase(--cursor); //���� Ŀ���� ���� ���ڸ� �����
				}
				else
					continue;

			else
				l1.insert(cursor, str[i]);
		}
		for (cursor = l1.begin(); cursor != l1.end(); cursor++)
			cout << *cursor; //cursor->�ּҸ� ��� ����, *->�ּҸ� �����ؼ� ���� ������
		cout << "\n";

	}
}