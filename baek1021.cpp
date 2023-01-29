#include <iostream>
#include <deque>
#include <algorithm> //�̰� �ȽἭ ���� Ʋ�Ⱦ���
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num;
	cin >> n >> num; //ť�� ũ�� >> �������� �ϴ� ���� ����

	deque <int> cir;

	for (int i = 1; i <= n; i++) {
		cir.push_back(i);
	}

	int cnt = 0; //�ּڰ� ���
	int index;

	while (num--) {
		int vote;
		cin >> vote; //�̾ƾ��ϴ� ����

		index = find(cir.begin(), cir.end(), vote) - cir.begin(); //�̾ƾߵǴ� ������ ��ġ

		while (vote != cir.front()) {
			if (index < cir.size() - index) {
				cir.push_back(cir.front());
				cir.pop_front();
				cnt++;
			}
			else if (index >= cir.size() - index) {
				cir.push_front(cir.back());
				cir.pop_back();
				cnt++;
			}
		}
		cir.pop_front();
	}
	cout << cnt;
}