#include <iostream>
using namespace std;
class Student {

public:
	long num;
	double marks;
	Student(long = 0, double = 0);
	 static Student* max(Student* student) {
		Student* maxstudent = &student[0];
		for (int i = 1; i < 5; i++) {
			if (student[i].marks > maxstudent->marks) {
				maxstudent = &student[i];
			}
		}
		return maxstudent;
	};
};
Student::Student(long m, double n) {
	num = m;
	marks = n;
}

int main() {
	Student student[5] = {
		Student(01,80),
		Student(02,85),
		Student(03,90),
		Student(04,88),
		Student(05,79)
	};
	cout << "学生信息" << endl;
	for (int j = 0; j < 5; j++)
		cout << "学号" << student[j].num << "成绩" << student[j].marks << endl;
	Student* p = Student::max(student);
	cout << "最高分学生学号为：" << p->num << endl;
	return 0;
}
