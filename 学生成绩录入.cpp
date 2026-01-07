#include<iostream>
using namespace std;
class Studentscores {	
public:
	int number;
	double score;
	void input() {
		int b;
		double c;
		cin >> b >> c;
		number = b;
		score = c;
	}
	void show() {
		cout << "学号" << ":" << number << " " << "成绩" << ":" << score << endl;
	}
};
int max(Studentscores*pointer) {
	double max = 0;
	int num = 0;
	for (int i = 0; i < 5; i++) {
		if (max <pointer->score) {
			max =pointer->score;
			num =pointer->number;
		}
		pointer++;
	}
	return num;
}
int main() {
	Studentscores stu[5];
	for (int i = 0; i < 5; i++) {
		stu[i].input();
	}
	for (int j = 0; j < 5; j++) {
		stu[j].show();
	}
	int x = max(stu);
	cout << "成绩最好的是" << ":" << x << endl;
}