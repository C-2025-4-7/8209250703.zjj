#include<iostream>
using namespace std;
class Time             
{
private:              // 数据成员改为私有的
	int hour;
	int minute;
	int sec;
public:
	void Input() {
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}
	void Show() //输出时间
	{
		cout << hour << ":" << minute << ":" << sec << endl;  
	}
};
int main(void)
{
	Time t1;           
	t1.Input();
	t1.Show();
	return 0;
}
//两个函数设定为公有的，时、分、秒设定为私有的。
