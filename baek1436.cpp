#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	//666들어있는 숫자 찾으면 cnt++, 입력값과 cnt가 같아지면 break
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