#include<iostream>
using namespace std;
int main() {
	bool a[100]{ false };
	for (int i = 1; i <= 100; i++) {
		for (int j = i-1; j < 100; j += i) {
			a[j]=!a[j];
		}
	}
	for (int k = 0; k < 100; k++) {
		if (a[k]) {
			cout << k+1<<endl;
		}
	}
}