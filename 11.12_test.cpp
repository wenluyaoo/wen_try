#include"swap.h"
int max(int a, int b) {
	int t;
	 t = a > b ? a : b;
	 cout <<"�����нϴ���Ϊ" << t << endl;
	 return t;
}//��������ʱ���Խ����ú����ڲ�����ʾֵ��ʾ��������ֻ����һ������
int main() {

	int num1, num2;
	cout << "�����һ������" << endl;
	cin >> num1;
	cout << "����ڶ�������" << endl;
	cin >> num2;
	max(num1, num2);
	swap(num1,num2 );
	return 0;
}