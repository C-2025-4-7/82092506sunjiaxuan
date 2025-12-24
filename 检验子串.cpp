#include<iostream>
using namespace std;
int indexof(const char s1[], const char s2[], int m, int n) {
	int s = 0;
	int temp = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (s1[i] == s2[j]) {
				if (s == 0) {
					temp = j + 1;
				}
				s++;
				break;
			}
		}
	}
	if (s == m) {
		return temp;
	}
	else {
		return -1;
	}
}
int main() {
	int i;
	cout << "请输入字符串1长度：" ;
	cin >> i;
	int j;
	cout << "请输入字符串2长度：";
	cin >> j;
	char s1[1000];
	char s2[1000];
	for (int m = 0; m < i; m++) {
		cin >>s1[m];
	}
	for (int n = 0; n < j; n++) {
		cin >> s2[n];
	}
	if (indexof(s1, s2,i,j) != -1) {
		cout << "从" << indexof(s1, s2,i,j) << "开始为子串";
	}
	else if (indexof(s1, s2,i,j) == -1) {
		cout << "不是子串";
	}
}
