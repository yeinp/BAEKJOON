#include <iostream>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed;//�Ҽ��� �Ʒ����� ��ȿ���� ���ڴ�
	cout.precision(9);//���� cout>>fixed;�� �Ἥ �Ҽ��� �Ʒ����� 9��°�ڸ����� ���� �����Ǿ� ��Ÿ��
	//������ ��ü �ڸ� ���ڸ� �����ϴ� ���
	cout << a / b;
}