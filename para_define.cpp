#include <iostream>
using namespace std;

int a,b;
char name;

//��������
char func(); 

int main(){
	//	��������
	int a;
	int b;
	char name;
	//������ʼ��
	a = 10;
	b = 12;
	name = 'x';
	
	cout << "a="<<a<<endl;
	cout << "b="<<b<<endl;
	cout << "name is:"<<name<<endl;	
	
	//��������
	char x = func();
	cout << x; 
	
	return 0;
}

//��������
char func(){
	return 'a';
}
