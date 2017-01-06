#include <iostream>
using namespace std;

int a,b;
char name;

//函数声明
char func(); 

int main(){
	//	变量定义
	int a;
	int b;
	char name;
	//变量初始化
	a = 10;
	b = 12;
	name = 'x';
	
	cout << "a="<<a<<endl;
	cout << "b="<<b<<endl;
	cout << "name is:"<<name<<endl;	
	
	//函数调用
	char x = func();
	cout << x; 
	
	return 0;
}

//函数定义
char func(){
	return 'a';
}
