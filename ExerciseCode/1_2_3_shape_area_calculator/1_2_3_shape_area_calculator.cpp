/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_3_shape_area_calculator.cpp
* 摘 要：感觉选择的图形求解面积
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
	char choice = '0';
	do
	{
		cout << "请选择图形：T(riangle)、C(ircle)、R(ectangle)、S(quare)，"
			"输入大写首字母后回车\n";
		cin >> choice;
		switch (choice) {
			//求解三角形面积
		case 'T': {//用单引号不要双引号！
			cout << "请输入三角形三边长a,b,c,用空格隔开";
			float a = 0, b = 0, c = 0;
			//注意如果int a,b,c=0;则只有c=0,考虑到实际情况在这里用float
			cin >> a >> b >> c;
			//一开始使用这种方法输入是错的cin >> a, b, a;
			float area = 0;
			float s = 0;
			s = (a + b + c) / 2;
			area = sqrt(s * (s - a) * (s - b) * (s - c));
			cout << "三角形面积为" << area << endl;
			break;//一定不要忘记break;
			//基本功能已经实现了，但是面对不合法的输入仍不能加以判断
		}

				//求解圆面积
		case 'C': {
			cout << "请输入圆半径r";
			float r = 0;
			cin >> r;
			float area = 0;
			area = 3.14159 * r * r;
			cout << "圆面积为" << area << endl;
			//注意C++里r^2并非指平方，而是异或(两数不同为1)
			break;
		}

				//求解长方形面积
		case 'R': {
			cout << "请输入长方形边长a,b用空格隔开";
			float a = 0, b = 0;
			cin >> a >> b;
			float area = 0;
			area = a * b;
			cout << "长方形面积为" << area << endl;
			break;
		}

				//求解正方形面积
		case 'S': {
			cout << "请输入正方形边长a";
			float a = 0;
			cin >> a;
			float area = 0;
			area = a * a;
			cout << "正方形面积为" << area << endl;
			break;
		}

				//对无效输入做提示
		default:
			cout << "您的选择无效";
		}
	} while (choice != 'T' && choice != 'C' && choice != 'R' && choice != 'S');
	//遇到了第一个错误，choice定义在循环体里导致此处再引用时未被定义


}
