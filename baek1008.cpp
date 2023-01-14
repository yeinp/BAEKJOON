#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed;//소수점 아래부터 유효숫자 세겠다
	cout.precision(9);//위에 cout>>fixed;를 써서 소수점 아래부터 9번째자리까지 숫자 고정되어 나타남
	//원래는 전체 자리 숫자를 고정하는 명령
	cout << a / b;
}