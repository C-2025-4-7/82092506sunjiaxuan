#include<iostream>
using namespace std;
class square {
private:
	double width;
	double height;
	double length;
public:
	square(double w,double h,double l) {
		width = w;
		height = h;
		length = l;
	}
	void volume(){
		cout<<"Ìå»ýÎª"<< width * height * length;
	}
	~square() {};
};
int main() {
	double i1, i2, i3;
	for (int i = 0; i < 3; i++) {
		cin >> i1 >> i2 >> i3;
		square s1(i1, i2, i3);
		s1.volume();
	}
}