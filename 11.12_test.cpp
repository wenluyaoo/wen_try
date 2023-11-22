#include"swap.h"
int max(int a, int b) {
	int t;
	 t = a > b ? a : b;
	 cout <<"两数中较大者为" << t << endl;
	 return t;
}//函数调用时可以将调用函数内部的显示值显示，并不是只返回一个数字
int main() {

	int num1, num2;
	cout << "输入第一个数字" << endl;
	cin >> num1;
	cout << "输入第二个数字" << endl;
	cin >> num2;
	max(num1, num2);
	swap(num1,num2 );
	return 0;
}