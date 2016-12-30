#include <iostream>
using namespace std;

int main(){
	typedef int int_num;
	int_num age;
	int_num height;
	age = 12;
	height = 180;
	cout << "你的年龄是："<<age<<"你的身高是："<<height;
	//	定义一个枚举类型
	enum direction{
		east,west,south,north
	} dir;
	dir = west;
	cout << "现在的方向是："<<dir; 
	return 0; 
	
}
