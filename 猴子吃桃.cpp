#include <iostream>
using namespace std;
int origin(int time,int left) {
	if (time == 1) {
		return left;
	}
	else {
		return origin(time-1,(left+1)*2);
	}
}
int main() {
	cout<<origin(10, 1);
}