#include <iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 60; y = 80;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << ", " << y << ")" << endl;
	}
};
int main() {
	int m, n;
	cout << "ÊäÈëÐÞ¸ÄÖµi¡¢j£º" << endl;
	cin >> m >> n;
	Point p;
	p.setPoint(m, n);
	p.display();
	return 0;
}