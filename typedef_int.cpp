#include <iostream>
using namespace std;

int main(){
	typedef int int_num;
	int_num age;
	int_num height;
	age = 12;
	height = 180;
	cout << "��������ǣ�"<<age<<"�������ǣ�"<<height;
	//	����һ��ö������
	enum direction{
		east,west,south,north
	} dir;
	dir = west;
	cout << "���ڵķ����ǣ�"<<dir; 
	return 0; 
	
}
