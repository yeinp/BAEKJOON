#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

bool primeNum(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0)
			return false;
	}
	
	return true;
}

bool Palindrome(string str) {
	string front, back;

	front = str;
	reverse(str.begin(), str.end());
	back = str;

	if (front == back)
		return true;
	else
		return false;

}

int main() {
	int N;
	cin >> N;
	
		for (int i = N; ; i++) {
			if (N > i)
				break;
			if ( Palindrome(to_string(i)) && primeNum(i)) {
				cout << i << endl;
				break;
				}
		}
	
	return 0;

}
