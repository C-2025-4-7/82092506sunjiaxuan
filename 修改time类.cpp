#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void input() {
		int h;
		int m;
		int s;
		cin >> h>> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void output() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.input();
	t1.output();
	return 0;
}