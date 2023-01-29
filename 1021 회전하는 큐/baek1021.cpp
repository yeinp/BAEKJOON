#include <iostream>
#include <deque>
#include <algorithm> //이거 안써서 백준 틀렸었음
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num;
	cin >> n >> num; //큐의 크기 >> 뽑으려고 하는 수의 개수

	deque <int> cir;

	for (int i = 1; i <= n; i++) {
		cir.push_back(i);
	}

	int cnt = 0; //최솟값 출력
	int index;

	while (num--) {
		int vote;
		cin >> vote; //뽑아야하는 순서

		index = find(cir.begin(), cir.end(), vote) - cir.begin(); //뽑아야되는 숫자의 위치

		while (vote != cir.front()) {
			if (index < cir.size() - index) { //왼쪽으로 이동
				cir.push_back(cir.front());
				cir.pop_front();
				cnt++;
			}
			else if (index >= cir.size() - index) { //오른쪽으로 이동
				cir.push_front(cir.back());
				cir.pop_back();
				cnt++;
			}
		}
		cir.pop_front();
	}
	cout << cnt;
}
