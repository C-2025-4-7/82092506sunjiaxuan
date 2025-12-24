#include<iostream>
using namespace std;
int parseHex(const char* const Hexstring) {
	int n = 0;
	const char* p = Hexstring;
	while (*p != '\0') {
		char s = *p;
		int i = 0;
		if (s >= '0' && s <= '9') {
			i = s - '0';
		}
		else if (s >= 'A' && s <= 'F') {
			i = 10 + s - 'A';
		}
		else if (s >= 'a' && s <= 'f') {
			i = 10 + s - 'a';
		}
		else{
			cout << "error" << endl;
			return -1;
		}
		n = n * 16 + i;
		p++;
	}
	return n;
}
int main() {
	const char* hexstr1 = "A5";
	cout << parseHex(hexstr1);
}