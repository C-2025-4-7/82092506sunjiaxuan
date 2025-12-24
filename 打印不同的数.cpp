#include<iostream>
using namespace std;
int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int b[10] = { 0 };
	int* p1 = a;
	int* p2 = b;
	for (int m = 0; m < 10; m++) {
		int s = 0;
		for (int n = 0; n < m; n++) {
			if (a[m] == a[n]) {
				s++;
				break;
			}
		}
		if (s == 0) {
			cout << a[m] << endl;
		}
	}
}