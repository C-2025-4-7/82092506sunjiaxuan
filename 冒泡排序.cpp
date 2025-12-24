#include <iostream>
using namespace std;
void bubblesort(double a[],int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				swap(a[i], a[j]);
			}
		}
	}
}
int main() {
	double arr[10];
		for (int k = 0; k < 10; k++) {
		cin >> arr[k];
	}
	bubblesort(arr,10);
	for (int m = 0; m < 10; m++) {
		cout << arr[m]<<" ";
	}
}