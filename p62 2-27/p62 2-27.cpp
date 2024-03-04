// p62 2-27.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	char operation;
	do {
		cout << "Menu：A （dd） D（elete） S（ort） Q （uit）， Select one：\n";
		cin >> operation;
		switch (int(operation)) {
			case 'A':
				cout << "数据已增加" << endl;
				break;
			case 'D':
				cout << "数据已删除"<<endl;
				break;
			case 'S':
				cout << "数据已排序" << endl;
				break;
			default:
				cout << "Invalid choice. Please try again." << endl;
				break;

		}
	} while (operation!='Q');
}

