#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	//666����ִ� ���� ã���� cnt++, �Է°��� cnt�� �������� break
	int movie = 665;
	while (true) {
		if (to_string(movie).find("666") != string::npos) {
			cnt++;
		}
		if (n == cnt)
			break;

		movie++;
	}
	cout << movie;

}