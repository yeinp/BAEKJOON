#include <iostream>
using namespace std;

int main() {
    int f1 = 1;
    int f2 = 0;
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n + 1; i++) {
        if (i == 0) {
            sum = f2;
        }
        else if (i == 1) {
            sum = f1;
        }
        else {
            sum = f1 + f2;
            f2 = f1;
            f1 = sum;
        }
    }
    cout << sum;
}