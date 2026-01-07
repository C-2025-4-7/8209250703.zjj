#include <iostream>;
using namespace std;
class CFZ {
private:
	double length;
	double width;
	double height;
	
public:
	void Input();
	double Calculate();
	void Output();
	
};
void CFZ::Input() {
	cin >> length;
	cin >> width;
	cin >> height;
}
double CFZ::Calculate() {
	return length * width * height;
}
void CFZ::Output() {
	cout<< Calculate() << endl;
}
void main() {
	CFZ v1, v2, v3;
	cout << "请输入第一个长方柱的长、宽、高：" << endl;
	v1.Input();
	cout << "请输入第二个长方柱的长、宽、高：" << endl;
	v2.Input();
	cout << "请输入第三个长方柱的长、宽、高：" << endl;
	v3.Input();
	v1.Output();
	v2.Output();
	v3.Output();
}