#include <iostream>
using namespace std;

void recursive(int n) {
	string under="";
	while (n >= 0) {
		if (n == 0) {
			cout << under << "\"����Լ��� ������?\"\n";
			cout << under << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
			cout << under << "��� �亯�Ͽ���.\n";
			break;
		}
		cout << under << "\"����Լ��� ������?\"\n";
		cout << under << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << under << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << under << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";


		under += "____";
		n -= 1;
	}
	for (int i = under.length() / 4; i > 0; i--) {
		under = under.substr(4);
		cout << under << "��� �亯�Ͽ���.\n";
	}
}



int main() {
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";

	recursive(n);
}
