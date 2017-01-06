#include <iostream>
using namespace std;

int main(){
	cout << "输入一个数字：";
	char digit; 
	while(true){
		digit = cin.get();
		cout << int(digit)<<"";
	}
}
