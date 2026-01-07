#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int a,int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << x << " "<<y;
	}
};
int main() {
	Point p1(60, 80);
	int i, j;
	cin >> i >> j;
	p1.setPoint(i, j);
	p1.display();
}