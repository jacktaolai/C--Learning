//�̲�p60 2-11
#include <iostream>
using namespace std;
int main()
{
	//for����
	int sum1 = 0;
	cout << "this is for solution"<<endl;
	for (int a = 100; a <= 200; a = a + 2)
		sum1 = sum1 + a;
	cout << sum1 << endl;

	//while����
	cout << "this is while solution"<<endl;
	int sum2 = 0;
	int a = 100;
	while (a <= 200) {
		sum2 = sum2 + a;
		a=a+2;
	}
	cout << sum2<<endl;

	//do while����
	cout << "this is do while solution" << endl;
	int c = 100;//����ע��˴���������a����Ϊ�ոյ�a�Ƕ�����ȫ�ֿռ��
	int sum3 = 0;
	do {
		sum3 = sum3 + c;
		c=c+2;
	} while (c <= 200);
	cout << sum3 << endl;
	return 0;
}
