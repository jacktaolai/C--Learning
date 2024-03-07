/********************************************
* Copyright (c) 2024，
* All rights reserved.
*
* 文件名称：1_2_7_fibonacci_equence
* 摘 要：输出斐波那契数列
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
    double a = 0, b = 1;
    cout << "您想使用什么就够输出斐波那契数列？f(or),(d)o while,(w)hile";
    char choice = '0';
    cin >> choice;
    //使用switch实现不同方法选择
    switch (choice) {

    //for方法实现斐波那契数列输出
    case 'f': {
        for (;;) {
            cout << a << ' ' << b<<' ';
            a = a + b;
            b = b + a;
        }
    }

    //使用do...while方法实现斐波那契数列输出
    case 'd': {
        do {
            cout << a << ' ' << b<<' ';
            a = a + b;
            b = b + a;
        } while (1);
    }

    //使用while方法实现斐波那契数列输出
    case 'w': {
        while (1) {
            cout << a << ' ' << b<<' ';
            a = a + b;
            b = b + a;
        }
    }
    default:
        cout << "正在退出程序......" << endl;
    }
}
//死循环，而且很快就越界了