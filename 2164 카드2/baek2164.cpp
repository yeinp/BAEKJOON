#include <iostream>
#include <queue>
using namespace std;

int n;
int cnt = 0;

int main() {

	cin >> n;

	queue<int> que;

	for (int i = 1; i <= n; i++) {
		que.push(i);
	}

	while (que.size() > 1) {

		if (cnt % 2 == 0) {
			que.pop();
			cnt++;
		}

		else if (cnt % 2 != 0) {
			que.push(que.front());
			que.pop();
			cnt++;
		}
	}
	cout << que.front();
}
