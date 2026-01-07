#include <iostream>
#include"student.h"   //不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int Num,const char *Name, char Sex) //定义set_value()函数
{
    num = Num;
    sex = Sex;
    int i=0;
    while(Name[i]!='\t'&&i<19)  
    {
        name[i]=Name[i];
        i++;
	}
}
