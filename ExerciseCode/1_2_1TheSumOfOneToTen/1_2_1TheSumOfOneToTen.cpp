/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_1TheSumOfOneToTen
* 摘 要：求一到十的和
*
* 当前版本：1.0
* 作 者：赖鑫涛
* 完成日期：2024年3月5日
* e-mail:jacktaolai@cug.edu.cn
*
* 取代版本：1.0
* 原作者 ：赖鑫涛
* 完成日期：2024年3月5日
*********************************************/

#include <iostream>
using namespace std;

int main()
{
	cout << "使用do while方法\n";
	int i = 1, sum = 0;//定义参数，sum为所求，i为自增变量
	do {
		sum = sum + i;
		i++;
	} while (i <= 10);
	cout << sum << endl;//在屏幕上输出结果

	cout << "使用 for 方法\n";
	for (int i = 1, sum = 0; i <= 10; i++)
		sum = sum + i;
	cout << sum << endl;
}

