/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：2_2_5_fibonacci_sequence_function
* 摘 要：使用递归求斐波那契数列
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月8日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：0.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月24日
*********************************************/

#include <iostream>
using namespace std;
int Fibonacci(int n) {
	//两类基本情况，当n=1和n=2时返回1
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	//递归情况
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}

}

int main(){
	cout << "输出前十项斐波那契数列：" << endl;
	for (int i = 1; i <= 10; i++) {
		cout << Fibonacci(i) << endl;
	}
	return 0;
}

