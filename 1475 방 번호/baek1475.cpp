#include <iostream>
using namespace std;

int main() {
	int num;
	int numRest;
	int result1 = 1;
	int result2 = 1;

	cin >> num;
	int arr[10] = { 0 };

	while (num>0) {
		numRest = num % 10;
		arr[numRest]++;
		num = num / 10;
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] > 1) {
			if (i != 6 && i != 9) {
				if (result1 < arr[i])
					result1 = arr[i]; 

			}
			else if (i == 6 || (i == 9 && arr[6] < 2)) {
				if ((arr[6] + arr[9]) % 2 == 0) { //arr[6]+arr[9]가 짝수일 때
					result2 = ((arr[6] + arr[9]) / 2);

				}
				else  {//arr[6]+arr[9]가 홀수일 때
					result2 = ((arr[6] + arr[9]) / 2) +1;

				}
			}
			
			//두개의 result 중 max가 최종 result
		}
	}
	
	cout << max(result1, result2);
}
