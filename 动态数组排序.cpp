#include<iostream>
using namespace std;
void sort(int arr[],int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n-1-i; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	int* p = new int[n];
	for (int j = 0; j < n; j++) {
		cin >> p[j];
	}
	sort(p, n); 
	int* p1 = p;
	for (int i = 0; i < n; i++) {
		cout <<"地址为"<< p1 <<" ";
		cout << "值为" << *p1 << " ";
		p1++;
	}
	delete p;
}